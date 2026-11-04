// name: FUN_1001a7790
// address: 1001a7790

undefined8 * FUN_1001a7790(undefined8 *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _CGBitmapContextCreateImage(*(undefined8 *)(param_2 + 8));
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10069ea03(uVar3);
    }
    FUN_1001782e9(0,0);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_1001b2dff((int)*(undefined8 *)(param_2 + 0x98),param_1,lVar2);
    FUN_10017060f(lVar2);
  }
  return param_1;
}

