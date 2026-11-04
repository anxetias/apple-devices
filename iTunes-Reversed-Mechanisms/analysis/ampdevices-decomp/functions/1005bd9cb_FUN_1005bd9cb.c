// name: FUN_1005bd9cb
// address: 1005bd9cb

undefined8 FUN_1005bd9cb(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = FUN_1005ba383(param_1,&cf_com_apple_disk_usage,&cf_CalculateDiskUsage,0,0);
  if (lVar1 == 0) {
    uVar2 = 0xe800000f;
  }
  else {
    FUN_10017060f(lVar1);
  }
  return uVar2;
}

