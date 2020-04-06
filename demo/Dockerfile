FROM integralces:dev

# Change admin password
RUN service mysql start && drush user-password admin --password="demo@ices2030"

# Add settings for proxy-pass
COPY settings.php.inc /sites/default/settings.php.inc
RUN printf "\ninclude dirname(__FILE__) . '/settings.php.inc';\n\n"
