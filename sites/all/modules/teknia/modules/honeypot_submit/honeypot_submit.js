(function($) {
  Drupal.behaviors.honeypotSubmit = {
    attach : function(context, settings) {

      var forms = settings['honeypot-submit-form'];

      $.each(forms, function (index, value) {

        var selector = '#' + value + ' input';

        // Add a class to all input fields so we can intercept their keydown
        // events.
        $(selector + ':not(.honeypot-block-enter)', context).each(function() {
          $(this).addClass('honeypot-block-enter');
        });
      });

      // Intercept the keydown of enter to prevent form submission.
      $('.honeypot-block-enter').keydown(function(e) {
        var code = e.which;

        // Do not allow enter key to be used for submitting forms.
        if (code == 13) {
          e.preventDefault();
        }
      });
    }
  }
})(jQuery);
