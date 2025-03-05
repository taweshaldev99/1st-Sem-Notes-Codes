#include <stdio.h>
#include <phonenumbers/phonenumberutil.h>

int main() {
    const char* phone_number = "+15555555555";
    PhoneNumberUtil* phone_util = PhoneNumberUtilGetInstance();
    PhoneNumber number;
    
    if (phone_util->Parse(phone_number, NULL, &number) &&
        phone_util->IsValidNumber(number)) {
        printf("Phone number is valid.\n");
        // You can now use the `number` object to extract information or perform further operations.
    } else {
        printf("Phone number is invalid.\n");
    }
    
    // Don't forget to clean up the resources used by libphonenumber.
    PhoneNumberUtilDestroyInstance(phone_util);
    
    return 0;
}

