// name: FUN_1001777a3
// address: 1001777a3

undefined8 FUN_1001777a3(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 in_EAX;
  undefined8 uVar2;
  undefined4 local_18 [2];
  
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068360c(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    *param_3 = 0;
    local_18[0] = in_EAX;
    uVar2 = FUN_1001774a7(param_1,param_2,local_18);
    if ((int)uVar2 == 0) {
      *param_3 = local_18[0];
      uVar2 = 0;
    }
  }
  return uVar2;
}

