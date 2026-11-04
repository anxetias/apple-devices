// name: FUN_1005b7c7f
// address: 1005b7c7f

bool FUN_1005b7c7f(void)

{
  long lVar1;
  
  if (DAT_1008c3010 == '\0') {
    lVar1 = FUN_1001c4140(&cf_MobileDevice_framework,&cf_AMRestorableDeviceCopyRestoreModeDevice,1);
    DAT_1008c3010 = (lVar1 == 0) + '\x01';
  }
  return DAT_1008c3010 == '\x01';
}

