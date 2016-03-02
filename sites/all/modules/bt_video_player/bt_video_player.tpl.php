<div style="width:<?php print $width ?>px; height:<?php print $height ?>px;"> 
<video controls="controls" id="html5player<?php print $delta ?>" style="background-color:#<?php print $color1 ?>" width="<?php print $width ?>" height="<?php print $height ?>">
<source src="<?php print $url ?>" type="video/mp4"> </video>
<script src="<?php print $path ?>/js/EmbedVideoPlayer.js" language="JavaScript"></script>
<script type="text/javascript">
  var p = document.getElementById(html5player<?php print $delta ?>);
  if(typeof p.canPlayType !== function || p.canPlayType(video/mp4) === "") {
    p.parentNode.removeChild(p);
    var width="<?php print $width ?>";
    var height="<?php print $height ?>";
    var swfUrl="<?php print $path ?>/js/EmbedVideoPlayer.swf";
    var mediaFile = "<?php print $url ?>";
    var imgUrl = "";
    var skinColor="#<?php print $color1 ?>";
    var bgColor="#<?php print $color2 ?>";
    var bufferTime="5";
    var videoAutoPlay="false";
    embedVideoPlayer(width, height, swfUrl, mediaFile, imgUrl, skinColor, bgColor, bufferTime, videoAutoPlay);
} </script>
</div>