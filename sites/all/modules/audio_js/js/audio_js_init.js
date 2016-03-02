/**
 * @file
 *
 * Replaces all instances of the <audio> tag using audio.js.
 */

(function ($) {
  Drupal.behaviors.audio_js = {
    attach: function(context) {
    if (context == document) {
      var SWFpath = Drupal.settings.audio_js.swf;
      var as = audiojs.createAll({
        css: false,
        swfLocation: SWFpath,
      });
     }
    }
  };
})(jQuery);
