<?php 

$node = node_load(382455);

$product = commerce_product_load(15);

$query = new EntityFieldQuery();
$query->entityCondition('entity_type',  'user')
->fieldCondition('og_user_node', 'target_id', $node->nid, '=');
$results = $query->execute();
foreach ($results['user'] as $uid) {
  $efq = new EntityFieldQuery();
  $licenses = $efq->entityCondition('entity_type', 'commerce_license')
  ->propertyCondition('type', 'og')
  ->propertyCondition('uid', $uid->uid)
  ->execute();
  if (!empty($licenses['commerce_license'])) {

  }
  else {
    $values = array(
      'uid' => $uid->uid,
      'product_id' => $product->product_id,
      'expires' => strtotime('+365 days'),
      'granted' => strtotime('now'),
      'status' => 2,
      'type' => 'og',
     'expires_automatically' => TRUE,
    );
    $license = entity_create('commerce_license', $values);
    entity_save('commerce_license', $license);
  }
}

