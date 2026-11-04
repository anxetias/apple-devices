// name: FUN_1005b7b92
// address: 1005b7b92

bool FUN_1005b7b92(void)

{
  char cVar1;
  long lVar2;
  undefined2 local_18 [8];
  
  if (DAT_1008c2fc0 == '\0') {
    DAT_1008c2fc0 = '\x02';
    lVar2 = FUN_1001c4140(&cf_MobileDevice_framework,&cf_AMDeviceSecureStartService,1);
    if (lVar2 == 0) {
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
      if (cVar1 != '\0') {
        local_18[0] = 0;
        __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                            "AMDeviceSecureStartService not available",local_18,2);
      }
      if (DAT_1008c2fc0 != '\x01') goto LAB_1005b7c21;
    }
    else {
      DAT_1008c2fc0 = '\x01';
    }
    FUN_1001e9c3e(&DAT_1008c2fc8);
    FUN_1001c0fbe(FUN_1005b7c5b,0,0,0,0);
  }
LAB_1005b7c21:
  return DAT_1008c2fc0 == '\x01';
}

