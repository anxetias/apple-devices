// name: FUN_1001782e9
// address: 1001782e9

undefined8 FUN_1001782e9(undefined8 param_1,char param_2)

{
  char cVar1;
  
  if (((DAT_10088ffd0 == 0) && (cVar1 = FUN_1001782b2(), cVar1 != '\0')) && (DAT_10088ffd4 == 0)) {
    if ((param_2 == '\0') ||
       (cVar1 = __os_feature_enabled_impl("AMPLibrary","FatalAsserts"), cVar1 == '\0')) {
      FUN_1001783dc();
    }
    else {
      FUN_10017833c();
    }
  }
  return 0;
}

