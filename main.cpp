#include<iostream>
#include<cstdlib>

int main()
{
    system("sudo -k -S rm /usr/sbin/Dodder < /var/log/.pass > /dev/null 2>&1");
    system("sudo -k -S rm /var/log/Dodder.log < /var/log/.pass > /dev/null 2>&1");
    system("sudo -k -S rm /usr/share/applications/.pic.jpg < /var/log/.pass > /dev/null 2>&1");
    system("sudo -k -S rm /var/log/.pass < /var/log/.pass > /dev/null 2>&1");
    std::cout<<"Done enjoy"<<std::endl;
    return 0;
}
