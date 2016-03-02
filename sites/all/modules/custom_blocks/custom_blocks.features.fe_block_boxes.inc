<?php
/**
 * @file
 * custom_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function custom_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Call to action 1';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_call_to_action1';
  $fe_block_boxes->body = '<div class="text-center">
  <h2 style="margin-top: 0px; margin-bottom: 40px;">Loved SpecialOne? What are you waiting for?</h2>
  <button class="btn btn-primary btn-large" style="margin-bottom: 0px;" type="button" value="Page" onclick="location.href=\'http://themeforest.net/item/specialone-responsive-drupal-theme/5218088\';">Buy it now!</button>
</div>';

  $export['specialone_call_to_action1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Call to action 2';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_call_to_action2';
  $fe_block_boxes->body = '<div class="text-center">
  <h3 class="no-margin-top" style="margin-bottom: 40px;">Need our services? Check our portfolio and if you like it drop us a line! </h3>
  <button class="btn btn-large" type="button" onClick="location.href=\'http://specialone.leaftree.pt/portfolio\';"><i class="icon-briefcase" style="padding-right: 10px;"></i>Works</button>
  <button class="btn btn-primary btn-large" type="button" onClick="location.href=\'http://specialone.leaftree.pt/contact\';"><i class="icon-envelope-alt" style="padding-right: 10px;"></i>Contact</button>
</div>';

  $export['specialone_call_to_action2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Contact content';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'specialone_contact_content';
  $fe_block_boxes->body = 'We would love to hear from you, please drop us a line and we promise to get back with you very soon.';

  $export['specialone_contact_content'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Contact info';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_contact_info';
  $fe_block_boxes->body = '<strong>Our Company, Inc.</strong><br>
795 Fake Ave, Door 6<br>
Wonderland, CA 94107<br>
<br>
<b>Phone:</b> +351253627460<br>
<b>Fax:</b> +351253627461<br>
<b>Email:</b> special@one.pt<br>
<b>GPS:</b> N 41.5540 W 8.4446';

  $export['specialone_contact_info'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Contact Info footer';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_contact_info_footer';
  $fe_block_boxes->body = '<p>You can also contact us by:</p>
<ul class="contact-info-block">
  <li class="map">11th Street, Braga, Portugal </li>
  <li class="phone">+351253627460</li>
  <li class="mail">special@one.pt</li>
  <li class="gps">N 41.5540 W 8.4446</li>
</ul>';

  $export['specialone_contact_info_footer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Contact widget header';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_contact_widget_header';
  $fe_block_boxes->body = '<div class="text-center-responsive">Call us now: (+351) 913 456 789</div>';

  $export['specialone_contact_widget_header'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Content Slider';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_content_slider';
  $fe_block_boxes->body = '<div class="row-fluid">
	<div class="span12">

		<div class="flexslider2 text-center">
			<ul class="slides">
				<li><img src="/sites/all/themes/specialone/img/content-slider/image1.jpg" alt="slider content 1" /></li>
				<li><img src="/sites/all/themes/specialone/img/content-slider/image2.jpg" alt="slider content 2" /></li>
			</ul> <!-- slides -->
		</div> <!-- flexslider2 -->

	</div> <!-- span12 -->
</div>';

  $export['specialone_content_slider'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Content Slider 2';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_content_slider2';
  $fe_block_boxes->body = '<div class="row-fluid">
	<div class="span6">

		<div class="flexslider2 text-center">
			<ul class="slides">
				<li><img src="/sites/all/themes/specialone/img/content-slider/image3.jpg" alt="slider content 3" /></li>
				<li><img src="/sites/all/themes/specialone/img/content-slider/image4.jpg" alt="slider content 4" /></li>
			</ul> <!-- slides -->
		</div> <!-- flexslider2 -->

	</div> <!-- span6 -->

	<div class="span6">
		<h5 class="block-title-small margin-top-responsive">We make dreams come true</h5>
		<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras egestas, nibh id auctor feugiat, ante ante sagittis nunc, ut congue turpis augue sit amet ante. Vestibulum aliquet, mauris vitae vestibulum varius, magna nisi ultrices ipsum, ut imperdiet magna diam sit amet augue.</p>
		<h5 class="block-title-small" style="margin-top: 40px;">Quality is in our DNA</h5>
		<p>Etiam semper malesuada mi, sed hendrerit ipsum malesuada id.</p>
		<div class="row-fluid">
			<div class="span6 mobile-two">
				<ul class="icons-ul no-margin-bottom">
					<li><i class="icon-li icon-ok"></i>Fast</li>
					<li><i class="icon-li icon-ok"></i>Lightweight</li>
					<li><i class="icon-li icon-ok"></i>Comprehensive</li>
					<li><i class="icon-li icon-ok"></i>Driven</li>
					<li><i class="icon-li icon-ok"></i>Quality</li>
				</ul>
			</div>
			<div class="span6 mobile-two">
				<ul class="icons-ul no-margin-bottom">
					<li><i class="icon-li icon-plus"></i>Performance</li>
					<li><i class="icon-li icon-plus"></i>Dolor</li>
					<li><i class="icon-li icon-plus"></i>Amet</li>
					<li><i class="icon-li icon-plus"></i>Dudensce</li>
					<li><i class="icon-li icon-plus"></i>Ipsum</li>
				</ul>
			</div>
		</div>
	</div> <!-- span6 -->

</div>';

  $export['specialone_content_slider2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Flickr';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'specialone_flickr';
  $fe_block_boxes->body = '<ul id="flickr" class="thumbs"></ul>';

  $export['specialone_flickr'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Footer text left';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_footer_text_left';
  $fe_block_boxes->body = '<div class="text-center-responsive">Powered by <a href="http://www.drupal.org">Drupal<a></div>';

  $export['specialone_footer_text_left'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Footer text right';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_footer_text_right';
  $fe_block_boxes->body = '<div class="text-right text-center-responsive">
   Specialone theme developed by <span class="textcolor">leaftree</span>
</div>';

  $export['specialone_footer_text_right'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Google Map';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_google_map';
  $fe_block_boxes->body = '<div id="map_canvas" class="google-map"></div>';

  $export['specialone_google_map'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Happy Clients';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_happy_clients';
  $fe_block_boxes->body = '<h2 class="happy-title text-center">25 000+ Happy Clients Can\'t be Wrong!</h2>
<div class="row-fluid happy">
	<div class="span4 happy-item">
		<p><i class="icon-anchor icon-4x pull-left"></i>Pellentesque non auctor metus. Maecenas ac odio eget leo rhoncus faucibus.</p>
	</div> <!-- /span4 -->
	<div class="span4 happy-item">
		<p><i class="icon-bell icon-4x pull-left"></i>Integer tempor sem eu massa ullamcorper, consequat consequat magna viverra.</p>
	</div> <!-- /span4 -->
	<div class="span4 happy-item">
		<p><i class="icon-bolt icon-4x pull-left"></i>Integer tempor sem eu massa ullamcorper, consequat consequat magna viverra.</p>
	</div> <!-- /span4 -->
</div> <!-- /row-fluid -->
<div class="row-fluid happy">
	<div class="span4 happy-item">
		<p><i class="icon-lightbulb icon-4x pull-left"></i>Pellentesque non auctor metus. Maecenas ac odio eget leo rhoncus faucibus.</p>
	</div> <!-- /span4 -->
	<div class="span4 happy-item">
		<p><i class="icon-bullhorn icon-4x pull-left"></i>Integer tempor sem eu massa ullamcorper, consequat consequat magna viverra.</p>
	</div> <!-- /span4 -->
	<div class="span4 happy-item">
		<p><i class="icon-plane icon-4x pull-left"></i>Integer tempor sem eu massa ullamcorper, consequat consequat magna viverra.</p>
	</div> <!-- /span4 -->
</div> <!-- /row-fluid -->';

  $export['specialone_happy_clients'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Highlighted text';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_highlighted';
  $fe_block_boxes->body = '<h3 class="highlighted-text margin-top margin-bottom">Maecenas congue lacinia orci, ac feugiat diam hendrerit aliquam. <span class="textcolor">Cras egestas scelerisque libero</span>, vel lobortis quam facilisis id. <span class="textcolor">Curabitur adipiscing mollis est hendrerit pretium</span>. In a diam sem, ac pulvinar neque.</h3>';

  $export['specialone_highlighted'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Jobs History';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_jobs_history';
  $fe_block_boxes->body = '<div class="row-fluid">
	<div class="span6">
		<h5 class="block-title-small">Latest Jobs</h5>
		<p>Etiam nisl enim, rhoncus non lobortis ornare, sollicitudin vel neque. Curabitur ut magna tellus. In accumsan nisi a mi elementum dignissim. Maecenas eget magna sed nibh tempus pellentesque in ac dui. Vestibulum mollis molestie justo, sed consectetur nisi pretium non. Vivamus sapien felis, lobortis sit amet convallis quis, placerat at sapien.</p>
		<dl class="dl-horizontal no-margin-bottom">
			<dt>2000 - 2002</dt>
			<dd>HTML & CSS geek at <em>Corporation</em></dd>
			<dt>2002 - 2004</dt>
			<dd>PHP Developer at <em>Enterprise</em></dd>
			<dt>2004 - 2006</dt>
			<dd>Webdesigner at <em>Company.inc</em></dd>
			<dt>2006 - 2009</dt>
			<dd>Drupal Developer at <em>Code</em></dd>
			<dt>2009 - 2010</dt>
			<dd>CEO at <em>Example</em></dd>
			<dt>2010 - Now</dt>
			<dd>Web Developer at <em>Freelancer</em></dd>
		</dl>
	</div> <!-- /span6 -->

	<div class="span6 margin-top-responsive">
		<h5 class="block-title-small">My History</h5>
		<ul class="nav nav-tabs" id="myTab">
			<li class="active"><a href="#home" data-toggle="tab"><i class="icon-trophy" style="padding-right: 10px;"></i>Awards</a></li>
			<li><a href="#profile" data-toggle="tab"><i class="icon-user" style="padding-right: 10px;"></i>Profile</a></li>
			<li><a href="#messages" data-toggle="tab"><i class="icon-suitcase" style="padding-right: 10px;"></i>Work</a></li>
		</ul>
	 
		<div class="tab-content no-margin-bottom">
			<div class="tab-pane fade in active" id="home">
				<p><i class="icon-trophy icon-3x pull-left icon-muted larger-icon-width"></i>1st Place at sollicitudin vel neque. Curabitur ut magna tellus. In accumsan nisi a mi elementum dignissim.</p>
				<p><i class="icon-ok icon-3x pull-left icon-muted larger-icon-width"></i>Certified by etiam nisl enim, rhoncus non lobortis ornare, sollicitudin vel neque. Curabitur ut magna tellus.</p>
				<p><i class="icon-plus icon-3x pull-left icon-muted larger-icon-width"></i>Warranty of magna tellus etiam nisl enim, rhoncus non lobortis ornare, sollicitudin vel neque. Curabitur ut magna tellus.</p>
			</div>
			<div class="tab-pane fade" id="profile">
				<p>Quisque facilisis eros eu dolor sollicitudin aliquet. Mauris faucibus lectus vitae nulla volutpat aliquet. Duis risus lorem, hendrerit a luctus in, lobortis eu tellus.Mauris faucibus lectus vitae nulla volutpat aliquet.</p>
				<div class="row-fluid">
					<div class="span6 mobile-two">
						<ul class="icons-ul no-margin-bottom">
							<li><i class="icon-li icon-ok"></i>Fast</li>
							<li><i class="icon-li icon-ok"></i>Lightweight</li>
							<li><i class="icon-li icon-ok"></i>Comprehensive</li>
						</ul>
					</div>
					<div class="span6 mobile-two">
						<ul class="icons-ul no-margin-bottom">
							<li><i class="icon-li icon-plus"></i>Performance</li>
							<li><i class="icon-li icon-plus"></i>Dolor</li>
							<li><i class="icon-li icon-plus"></i>Dudensce</li>
						</ul>
					</div>
				</div>
			</div>
			<div class="tab-pane fade" id="messages">
				<h6 class="no-margin-top">Work is a must</h6>
				<p>Etiam nisl enim, rhoncus non lobortis ornare, sollicitudin vel neque. Curabitur ut magna tellus. In accumsan nisi a mi elementum dignissim. Maecenas eget magna sed nibh tempus pellentesque in ac dui. Vestibulum mollis molestie justo, sed consectetur nisi pretium non.</p>
				<p class="no-margin-bottom">Quisque neque eros, aliquam in ornare et, tincidunt ut eros. Etiam ultricies varius massa, quis lacinia neque adipiscing ut. Cras sagittis suscipit arcu, ac ullamcorper mauris mattis quis.</p>
			</div>
		</div>
	</div> <!-- /span6 -->
</div> <!-- /row-fluid -->';

  $export['specialone_jobs_history'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Our team';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_our_team';
  $fe_block_boxes->body = '<div class="row-fluid team">
	<div class="span4 team-element">
		<img src="/sites/all/themes/specialone/img/people/aboutme.jpg" alt="member"/>
		<div class="team-name">
			<h4>John Doe</h4>
			<h4><small>CEO</small></h4>
		</div>
		<p>Duis sollicitudin, ante tristique facilisis malesuada, lacus nibh ullamcorper nunc, et pulvinar mauris massa ut mi.</p>
		<div class="team-social">
			<a href="http://www.facebook.com/"><i class="icon-facebook"></i></a>
			<a href="http://www.twitter.com/"><i class="icon-twitter"></i></a>
			<a href="http://www.linkedin.com/"><i class="icon-linkedin"></i></a>
			<a href="http://plus.google.com/"><i class="icon-google-plus"></i></a>
		</div>
	</div> <!-- /span3 -->
	<div class="span4 team-element">
		<img src="/sites/all/themes/specialone/img/people/member5.jpg" alt="member"/>
		<div class="team-name">
			<h4>Jane Doe</h4>
			<h4><small>Designer</small></h4>
		</div>
		<p>Etiam nisl enim, rhoncus non lobortis ornare, sollicitudin vel neque. Quisque facilisis eros eu dolor sollicitudin aliquet.</p>
		<div class="team-social">
			<a href="http://www.facebook.com/"><i class="icon-facebook"></i></a>
			<a href="http://www.twitter.com/"><i class="icon-twitter"></i></a>
			<a href="http://www.linkedin.com/"><i class="icon-linkedin"></i></a>
			<a href="http://plus.google.com/"><i class="icon-google-plus"></i></a>
		</div>
	</div> <!-- /span3 -->
	<div class="span4 team-element">
		<img src="/sites/all/themes/specialone/img/people/member6.jpg" alt="member"/>
		<div class="team-name">
			<h4>Anna Doe</h4>
			<h4><small>Developer</small></h4>
		</div>
		<p> Vestibulum eget aliquet diam. Fusce vehicula nulla nec nisl hendrerit laoreet. Quisque facilisis eros.</p>
		<div class="team-social">
			<a href="http://www.facebook.com/"><i class="icon-facebook"></i></a>
			<a href="http://www.twitter.com/"><i class="icon-twitter"></i></a>
			<a href="http://www.linkedin.com/"><i class="icon-linkedin"></i></a>
			<a href="http://plus.google.com/"><i class="icon-google-plus"></i></a>
		</div>
	</div> <!-- /span3 -->
</div> <!-- /row-fluid -->';

  $export['specialone_our_team'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Panels';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_panels';
  $fe_block_boxes->body = '<div class="row-fluid panels">
	<div class="span4 panel">
		<div class="panel-icon">
			<i class="icon icon-picture"></i>
		</div>
		<div class="panel-info">
			<h3>Ultra Responsive</h3>
			<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Proin neque ipsum, aliquet sed iaculis quis, interdum sit amet nunc. Quisque a ipsum eu ante aliquam pharetra.</p>
		</div>
	</div>
	<div class="span4 panel">
		<div class="panel-icon">
			<i class="icon icon-inbox"></i>
		</div>
		<div class="panel-info">
			<h3>Clean Design</h3>
			<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Proin neque ipsum, aliquet sed iaculis quis, interdum sit amet nunc. Quisque a ipsum eu ante aliquam pharetra.</p>
		</div>
	</div>
	<div class="span4 panel">
		<div class="panel-icon">
			<i class="icon icon-globe"></i>
		</div>
		<div class="panel-info">
			<h3>Multipurpose</h3>
			<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Proin neque ipsum, aliquet sed iaculis quis, interdum sit amet nunc. Quisque a ipsum eu ante aliquam pharetra.</p>
		</div>
	</div>
</div>';

  $export['specialone_panels'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Panels Version 2';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_panels_2';
  $fe_block_boxes->body = ' <div class="row-fluid panels-2">

	<div class="span6 panel-2 panel-2-left">
		<div class="panel-icon"><i class="icon-pencil"></i></div>
		<div class="panel-info">
			<h4>Well Documented</h4>
			<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla commodo dolor in dui lacinia gravida.</p>
		</div>
	</div> <!-- span6 -->
        
	<div class="span6 panel-2 panel-2-right">
		<div class="panel-icon"><i class="icon-phone"></i></div>
		<div class="panel-info">
			<h4>Great Customer Support</h4>
			<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla commodo dolor in dui lacinia gravida.</p>
		</div>
	</div> <!-- span6 -->
        
</div> <!-- row-fluid -->
      
<div class="row-fluid panels-2">

	<div class="span6 panel-2 panel-2-left">
		<div class="panel-icon"><i class="icon-code"></i></div>
		<div class="panel-info">
			<h4>Clean Code</h4>
			<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla commodo dolor in dui lacinia gravida.</p>
		</div>
	</div> <!-- span6 -->
        
	<div class="span6 panel-2 panel-2-right">
		<div class="panel-icon"><i class="icon-rocket"></i></div>
		<div class="panel-info">
			<h4>Latest Technologies</h4>
			<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla commodo dolor in dui lacinia gravida.</p>
		</div>
	</div> <!-- span6 -->
        
</div> <!-- row-fluid -->';

  $export['specialone_panels_2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Partners';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_partners';
  $fe_block_boxes->body = '<div class="row-fluid partners">
	<div class="span3 partner">
		<img src="/sites/all/themes/specialone/img/partners/themeforest.png" alt="themeforest"/>
	</div> 
	<div class="span3 partner">
		<img src="/sites/all/themes/specialone/img/partners/codecanyon.png" alt="codecanyon"/>
	</div> 
	<div class="span3 partner">
		<img src="/sites/all/themes/specialone/img/partners/activeden.png" alt="activeden"/>
	</div> 
	<div class="span3 partner">
		<img src="/sites/all/themes/specialone/img/partners/audiojungle.png" alt="audiojungle"/>
	</div> 
</div> <!-- /row-fluid -->';

  $export['specialone_partners'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Pricing tables';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_pricing_tables';
  $fe_block_boxes->body = '<div class="row-fluid pricingtables">
	<div class="span3 ptable">
		<ul>
			<li class="pt-title"><h4>Basic</h4></li>
			<li class="pt-price"><h3>$19.99<small> / year</small></h3></li>
			<li><b>5</b> Different Colors</li>
			<li><b>2</b> Sliders</li>
			<li><b>3</b> Domains</li>
			<li>Site Builder</li>
			<li>E-mail Assistance</li>
			<li><b>10</b> Photos</li>
			<li><b>1</b> GB Storage</li>
			<li>30 days money back</li>
			<li class="pt-footer"><button class="btn" type="button">Buy</button></li>
		</ul>
	</div> <!-- /span3 -->
	<div class="span3 ptable">
		<ul>
			<li class="pt-title"><h4>Pro</h4></li>
			<li class="pt-price"><h3>$29.99<small> / year</small></h3></li>
			<li><b>10</b> Different Colors</li>
			<li><b>10</b> Sliders</li>
			<li><b>5</b> Domains</li>
			<li>Site Builder</li>
			<li>E-mail Assistance</li>
			<li><b>100</b> Photos</li>
			<li><b>2 GB</b> Storage</li>
			<li>30 days money back</li>
			<li class="pt-footer"><button class="btn" type="button">Buy</button></li>
		</ul>
	</div> <!-- /span3 -->
	<div class="span3 ptable">
		<ul>
			<li class="pt-title"><h4>Advanced</h4></li>
			<li class="pt-price"><h3>$49.99<small> / year</small></h3></li>
			<li><b>Unlimited</b> Colors</li>
			<li><b>15</b> Sliders</li>
			<li><b>10</b> Domains</li>
			<li>Site Builder</li>
			<li>Phone Assistance</li>
			<li><b>1000</b> Photos</li>
			<li><b>10 GB</b> Storage</li>
			<li>30 days money back</li>
			<li class="pt-footer"><button class="btn btn-primary" type="button">Special Price</button></li>
		</ul>
	</div> <!-- /span3 -->
	<div class="span3 ptable">
		<ul>
			<li class="pt-title"><h4>Premium</h4></li>
			<li class="pt-price"><h3>$99.99<small> / year</small></h3></li>
			<li><b>Unlimited</b> Colors</li>
			<li><b>20</b> Sliders</li>
			<li><b>30</b> Domains</li>
			<li>Site Builder</li>
			<li><b>24/7</b> Dedicated Assistance</li>
			<li><b>Unlimited</b> Photos</li>
			<li><b>Unlimited</b> Storage</li>
			<li>30 days money back</li>
			<li class="pt-footer"><button class="btn" type="button">Buy</button></li>
		</ul>
	</div> <!-- /span3 -->
</div> <!-- /row-fluid -->';

  $export['specialone_pricing_tables'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Round skills';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_round_skills';
  $fe_block_boxes->body = '<div class="row-fluid">
	<div class="span3 text-center margin-bottom-responsive">
		<h3 class="no-margin-top">My Skills</h3>
		<p class="margin-bottom">These are my abilities. I\'m driven by quality and moved by passion.<br>To see it in action consult my work!</p>
		<button class="btn btn-primary" type="button" onClick="location.href=\'http://specialone.leaftree.pt/portfolio\';">
			<i class="icon-briefcase" style="padding-right: 10px;"></i>Portfolio
		</button>
	</div> <!-- /span3 -->

	<div class="span3 text-center margin-bottom-responsive">
		<h3 class="no-margin-top">HTML5</h3>
		<div class="chart" data-percent="90">90%</div>
	</div> <!-- /span3 -->

	<div class="span3 text-center margin-bottom-responsive">
		<h3 class="no-margin-top">CSS3</h3>
		<div class="chart" data-percent="80">80%</div>
	</div> <!-- /span3 -->

	<div class="span3 text-center">
		<h3 class="no-margin-top">JavaScript</h3>
		<div class="chart" data-percent="60">60%</div>
	</div> <!-- /span3 -->
</div> <!-- /row-fluid -->';

  $export['specialone_round_skills'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Site Slogan';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_site_slogan';
  $fe_block_boxes->body = '<div class="slogan text-center">
  <h3>Special<span class="textcolor">One</span> is a highly customizable <span class="textcolor">multipurpose</span> drupal theme</h3>
  <button class="btn btn-primary">Click me!</button>
</div>';

  $export['specialone_site_slogan'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Social networks';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_social_networks';
  $fe_block_boxes->body = '<div id="social-networks" class="text-center">
  <a href="http://www.facebook.com" class="tooltips" data-toggle="tooltip" data-placement="top" title="" data-original-title="Facebook"><i class="icon-facebook"></i></a>
  <a href="http://www.twitter.com" class="tooltips" data-toggle="tooltip" data-placement="top" title="" data-original-title="Twitter"><i class="icon-twitter"></i></a>
  <a href="http://www.linkedin.com" class="tooltips" data-toggle="tooltip" data-placement="top" title="" data-original-title="LinkedIn"><i class="icon-linkedin"></i></a>
  <a href="http://www.pinterest.com" class="tooltips" data-toggle="tooltip" data-placement="top" title="" data-original-title="Pinterest"><i class="icon-pinterest"></i></a>
  <a href="http://plus.google.com" class="tooltips" data-toggle="tooltip" data-placement="top" title="" data-original-title="Plus"><i class="icon-google-plus"></i></a>
  <a href="http://www.github.com" class="tooltips" data-toggle="tooltip" data-placement="top" title="" data-original-title="GitHub"><i class="icon-github"></i></a>
</div>';

  $export['specialone_social_networks'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Social networks widget footer';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_social_networks_foote';
  $fe_block_boxes->body = '<div id="social-widget-footer" class="text-center">
  <a href="http://www.facebook.com"><i class="icon-facebook"></i></a>
  <a href="http://www.twitter.com"><i class="icon-twitter"></i></a>
  <a href="http://www.linkedin.com"><i class="icon-linkedin"></i></a>
  <a href="http://www.pinterest.com"><i class="icon-pinterest"></i></a>
  <a href="http://plus.google.com"><i class="icon-google-plus"></i></a>
  <a href="http://www.github.com"><i class="icon-github"></i></a>
</div>';

  $export['specialone_social_networks_foote'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Social networks widget header';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_social_networks_heade';
  $fe_block_boxes->body = '<div id="social-widget-header" class="text-center-responsive">
  <a href="http://www.facebook.com"><i class="icon-facebook"></i></a>
  <a href="http://www.twitter.com"><i class="icon-twitter"></i></a>
  <a href="http://www.linkedin.com"><i class="icon-linkedin"></i></a>
  <a href="http://www.pinterest.com"><i class="icon-pinterest"></i></a>
  <a href="http://plus.google.com"><i class="icon-google-plus"></i></a>
  <a href="http://www.github.com"><i class="icon-github"></i></a>
</div>';

  $export['specialone_social_networks_heade'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Social networks widget side';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_social_networks_side';
  $fe_block_boxes->body = '<div id="social-widget-side">
  <a href="http://www.facebook.com"><i class="icon-facebook-sign"></i></a>
  <a href="http://www.twitter.com"><i class="icon-twitter-sign"></i></a>
  <a href="http://www.linkedin.com"><i class="icon-linkedin-sign"></i></a>
  <a href="http://www.pinterest.com"><i class="icon-pinterest-sign"></i></a>
  <a href="http://plus.google.com"><i class="icon-google-plus-sign"></i></a>
</div>';

  $export['specialone_social_networks_side'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Tabs';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_tabs';
  $fe_block_boxes->body = '<ul class="nav nav-tabs" id="myTab">
	<li class="active"><a href="#tab1" data-toggle="tab">Tab1</a></li>
	<li><a href="#tab2" data-toggle="tab">Tab2</a></li>
</ul>
	 
<div class="tab-content">
	<div class="tab-pane fade in active" id="tab1">
		<p>Quisque facilisis eros eu dolor sollicitudin aliquet. Mauris faucibus lectus vitae nulla volutpat aliquet. Duis risus lorem, hendrerit a luctus in, lobortis eu tellus. Curabitur tincidunt, velit non commodo placerat, libero velit viverra nibh, non imperdiet nisl nulla nec lectus.</p>
	</div>
	<div class="tab-pane fade" id="tab2">
		<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec risus neque, eget sagittis est. Nulla eget libero ligula, ac scelerisque sapien. Donec sit amet sapien purus, sit amet tristique nisi. Fusce non sapien sapien. Aenean vel felis lectus. Duis nec lorem ut magna varius tempor.</p>
	</div>
</div>';

  $export['specialone_tabs'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Tabs and Skills';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_tabs_skills';
  $fe_block_boxes->body = '<div class="row-fluid">
	<div class="span6">
		<h5 class="block-title-small">Production Guides</h5>
		<!-- Tabs -->
		<ul class="nav nav-tabs" id="myTab">
			<li class="active"><a href="#home" data-toggle="tab"><i class="icon-heart" style="padding-right: 10px;"></i>Passion</a></li>
			<li><a href="#quality" data-toggle="tab"><i class="icon-beaker" style="padding-right: 10px;"></i>Quality</a></li>
			<li><a href="#perfection" data-toggle="tab"><i class="icon-trophy" style="padding-right: 10px;"></i>Perfection</a></li>
		</ul>
	 
		<div class="tab-content no-margin-bottom">
			<div class="tab-pane fade in active" id="home">
				<p>Quisque facilisis eros eu dolor sollicitudin aliquet. Mauris faucibus lectus vitae nulla volutpat aliquet. Duis risus lorem, hendrerit a luctus in, lobortis eu tellus.Mauris faucibus lectus vitae nulla volutpat aliquet.</p>
				<div class="row-fluid">
					<div class="span6 mobile-two">
						<ul class="icons-ul no-margin-bottom">
							<li><i class="icon-li icon-ok"></i>Fast</li>
							<li><i class="icon-li icon-ok"></i>Lightweight</li>
							<li><i class="icon-li icon-ok"></i>Comprehensive</li>
						</ul>
					</div>
					<div class="span6 mobile-two">
						<ul class="icons-ul no-margin-bottom">
							<li><i class="icon-li icon-plus"></i>Performance</li>
							<li><i class="icon-li icon-plus"></i>Dolor</li>
							<li><i class="icon-li icon-plus"></i>Dudensce</li>
						</ul>
					</div>
				</div>
			</div>
			<div class="tab-pane fade" id="quality">
				<div class="row-fluid">
					<div class="span6">
						<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec risus neque, eget sagittis est. Nulla eget libero ligula, ac scelerisque sapien. Donec sit amet sapien purus, sit amet tristique nisi. Fusce non sapien sapien. Aenean vel felis lectus. Duis nec lorem ut magna varius tempor.</p>
					</div>
					<div class="span6">
						<p>Maecenas ornare, libero quis interdum volutpat, arcu mauris ullamcorper sem, ac bibendum massa dui sed nibh. Mauris nec nisi non ante tempus fringilla. Curabitur at arcu ipsum. Proin dui metus, fringilla id condimentum eu, rutrum in erat. Aliquam erat volutpat. Sed ut turpis est.</p>
					</div>
				</div>
			</div>
			<div class="tab-pane fade" id="perfection">
				<p><i class="icon-trophy icon-3x pull-left icon-muted larger-icon-width"></i>1st Place at sollicitudin vel neque. Curabitur ut magna tellus. In accumsan nisi a mi elementum dignissim.</p>
				<p><i class="icon-ok icon-3x pull-left icon-muted larger-icon-width"></i>Certified by etiam nisl enim, rhoncus non lobortis ornare, sollicitudin vel neque. Curabitur ut magna tellus.</p>
				<p><i class="icon-plus icon-3x pull-left icon-muted larger-icon-width"></i>Warranty of magna tellus etiam nisl enim, rhoncus non lobortis ornare, sollicitudin vel neque. Curabitur ut magna tellus.</p>
			</div>
		</div> 
		<!-- /Tabs -->
	</div> <!-- /span6 -->
	<div class="span6 skills margin-top-responsive">
		<h5 class="block-title-small">Our Skills</h5>
		HTML5  -  70%
		<div class="progress">
			<div class="bar" style="width: 70%;"></div>
		</div>
		CSS3  -  90%
		<div class="progress">
			<div class="bar" style="width: 90%;"></div>
		</div>
		JavaScript  -  80%
		<div class="progress">
			<div class="bar" style="width: 80%;"></div>
		</div>
		Photoshop  -  60%
		<div class="progress no-margin-bottom">
			<div class="bar" style="width: 60%;"></div>
		</div>
	</div>
</div> <!-- /row-fluid -->';

  $export['specialone_tabs_skills'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Testimonials';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_testimonials';
  $fe_block_boxes->body = '<div id="testimonials">
	<div id="testimonialsCarousel" class="carousel slide carousel-fade">
		<ol class="carousel-indicators">
			<li data-target="#testimonialsCarousel" data-slide-to="0" class="active"></li>
			<li data-target="#testimonialsCarousel" data-slide-to="1"></li>
		</ol>
		<!-- Carousel items -->
		<div class="carousel-inner">
			<div class="active item">
				<div class="row-fluid">
					<div class="span12">
						<blockquote>
							<i class="icon-quote-left"></i>
							<h4>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam iaculis urna sit amet eros sodales laoreet. In vel dignissim turpis. Maecenas vel neque non nisl congue. Etiam erat urna, aliquet et ligula ut, lacinia faucibus velit.</h4>
							<img class="author-img img-circle" src="/sites/all/themes/specialone/img/people/author1.jpg" alt="author1">
							<span class="author">John Doe in <span class="textcolor">Wired</span></span>
						</blockquote>
					</div>
				</div>
			</div>

			<div class="item">
				<div class="row-fluid">
					<div class="span12">
						<blockquote>
							<i class="icon-quote-left"></i>
							<h4>It is a long established fact that a reader will be distracted by the readable content of a page when looking at its layout. The point of using Lorem Ipsum is that it has a more-or-less normal distribution of letters.</h4>
							<img class="author-img img-circle" src="/sites/all/themes/specialone/img/people/author2.jpg" alt="author2">
							<span class="author">Washington Doe in <span class="textcolor">New York Times</span></span>
						</blockquote>
					</div>
				</div>
			</div>
		</div>
	</div>
</div>';

  $export['specialone_testimonials'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Text widget';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_text_widget';
  $fe_block_boxes->body = '<div>
  <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut mollis pellentesque sem ultrices lacinia. Mauris non nibh magna.</p>
</div>
<a class="btn btn-primary" href="#">Help!</a>
';

  $export['specialone_text_widget'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Text widget header';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_text_widget_header';
  $fe_block_boxes->body = '<div class="text-center-responsive">Awesome is our middle name!</div>';

  $export['specialone_text_widget_header'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Toggle and text';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_toggle_text';
  $fe_block_boxes->body = '<div class="row-fluid">
	<div class="span6">
		<h5 class="block-title-small">Production Guides</h5>
		<!-- Toggle -->
		<div class="accordion no-margin-bottom" id="accordion1">
			<div class="accordion-group">
				<div class="accordion-heading">
					<a class="accordion-toggle" data-toggle="collapse" data-parent="#accordion1" href="#collapseOne">
						<i class="icon-gears" style="padding-right: 10px"></i>Lorem ipsum
					</a>
				</div>
				<div id="collapseOne" class="accordion-body collapse in">
					<div class="accordion-inner">
						<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec risus neque, eget sagittis est. Nulla eget libero ligula, ac scelerisque sapien. Donec sit amet sapien purus, sit amet tristique nisi. Fusce non sapien sapien. Aenean vel felis lectus.</p>
					</div>
				</div>
			</div>

			<div class="accordion-group">
				<div class="accordion-heading">
					<a class="accordion-toggle" data-toggle="collapse" data-parent="#accordion1" href="#collapseTwo">
						<i class="icon-heart" style="padding-right: 10px"></i>Duis sollicitudin
					</a>
				</div>
				<div id="collapseTwo" class="accordion-body collapse">
					<div class="accordion-inner">
						<p>Quisque facilisis eros eu dolor sollicitudin aliquet. Mauris faucibus lectus vitae nulla volutpat aliquet. Duis risus lorem, hendrerit a luctus in, lobortis eu tellus. Curabitur tincidunt, velit non commodo placerat, libero velit viverra nibh.</p>
					</div>
				</div>
			</div>
			
			<div class="accordion-group">
				<div class="accordion-heading">
					<a class="accordion-toggle" data-toggle="collapse" data-parent="#accordion1" href="#collapseThree">
						<i class="icon-trophy" style="padding-right: 10px"></i>Quisque facilisis
					</a>
				</div>
				<div id="collapseThree" class="accordion-body collapse">
					<div class="accordion-inner">
						<p>Etiam nisl enim, rhoncus non lobortis ornare, sollicitudin vel neque. Curabitur ut magna tellus. In accumsan nisi a mi elementum dignissim. Maecenas eget magna sed nibh tempus pellentesque in ac dui. Vestibulum mollis molestie justo.</p>
					</div>
				</div>
			</div>
		</div> <!-- /accordion -->
		<!-- / Toggle -->
	</div> <!-- /span6 -->

	<div class="span6">
		<h5 class="block-title-small">Customer Support </h5>
		<p><span class="dropcap">L</span>orem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec risus neque, eget sagittis est. Nulla eget libero ligula, ac scelerisque sapien. Donec sit amet sapien purus, sit amet tristique nisi. Fusce non sapien sapien. Aenean vel felis lectus. Integer nec risus neque, eget sagittis est. Nulla eget libero ligula, ac scelerisque sapien. Proin ornare ultrices enim sed tempus. Lorem ipsum dolor sit amet, consectetur adipiscing elit. </p>
		<div class="row-fluid">
			<div class="span6 mobile-two">
				<ul class="icons-ul no-margin-bottom">
					<li><i class="icon-li icon-ok"></i>Fast</li>
					<li><i class="icon-li icon-ok"></i>Lightweight</li>
					<li><i class="icon-li icon-ok"></i>Comprehensive</li>
					<li><i class="icon-li icon-ok"></i>Driven</li>
				</ul>
			</div>
			<div class="span6 mobile-two">
				<ul class="icons-ul no-margin-bottom">
					<li><i class="icon-li icon-plus"></i>Performance</li>
					<li><i class="icon-li icon-plus"></i>Dolor</li>
					<li><i class="icon-li icon-plus"></i>Amet</li>
					<li><i class="icon-li icon-plus"></i>Dudensce</li>
				</ul>
			</div>
		</div>
	</div>
</div> <!-- /row-fluid -->';

  $export['specialone_toggle_text'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Toggles';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_toggles';
  $fe_block_boxes->body = '<div class="accordion" id="accordion2">

	<div class="accordion-group">
		<div class="accordion-heading">
			<a class="accordion-toggle" data-toggle="collapse" data-parent="#accordion2" href="#collapseOne">
				Lorem ipsum
			</a>
		</div>
		<div id="collapseOne" class="accordion-body collapse">
			<div class="accordion-inner">
				<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec risus neque, eget sagittis est. Nulla eget libero ligula, ac scelerisque sapien. Donec sit amet sapien purus, sit amet tristique nisi. Fusce non sapien sapien.</p>
			</div>
		</div>
	</div>

	<div class="accordion-group">
		<div class="accordion-heading">
			<a class="accordion-toggle" data-toggle="collapse" data-parent="#accordion2" href="#collapseTwo">
				Duis sollicitudin
			</a>
		</div>
		<div id="collapseTwo" class="accordion-body collapse">
			<div class="accordion-inner">
				<p>Quisque facilisis eros eu dolor sollicitudin aliquet. Mauris faucibus lectus vitae nulla volutpat aliquet. Duis risus lorem, hendrerit a luctus in, lobortis eu tellus. Curabitur tincidunt, velit non commodo placerat, libero velit viverra nibh, non imperdiet nisl nulla nec lectus.</p>
			</div>
		</div>
	</div>
			
	<div class="accordion-group">
		<div class="accordion-heading">
			<a class="accordion-toggle" data-toggle="collapse" data-parent="#accordion2" href="#collapseThree">
				Quisque facilisis
			</a>
		</div>
		<div id="collapseThree" class="accordion-body collapse">
			<div class="accordion-inner">
				<p>Etiam nisl enim, rhoncus non lobortis ornare, sollicitudin vel neque. Curabitur ut magna tellus. In accumsan nisi a mi elementum dignissim. Maecenas eget magna sed nibh tempus pellentesque in ac dui. Vestibulum mollis molestie justo, sed consectetur nisi pretium non.</p>
			</div>
		</div>
	</div>
			
</div> ';

  $export['specialone_toggles'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Specialone: Video';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'specialone_video';
  $fe_block_boxes->body = '<div class="video">
  <iframe style="border: none;" height="720" src="http://www.youtube.com/embed/FHtvDA0W34I?rel=0" width="1280"></iframe>
</div>';

  $export['specialone_video'] = $fe_block_boxes;

  return $export;
}
