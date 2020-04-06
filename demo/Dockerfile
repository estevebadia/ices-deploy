FROM integralces:dev

# Change admin password
RUN service mysql start && drush user-password admin --password="demo@ices2030"

# Add settings for proxy-pass
COPY settings.php.inc sites/default/settings.php.inc
RUN printf "\ninclude dirname(__FILE__) . '/settings.php.inc';\n\n" >> sites/default/settings.php

COPY demo-front.tpl.inc sites/all/themes/greences/templates
RUN sed -i "/social currencies management for communities./a <?php include dirname(__FILE__) . '/demo-front.tpl.inc';" sites/all/themes/greences/templates/page.tpl.php
