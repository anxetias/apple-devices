// name: FUN_1001700d6
// address: 1001700d6

undefined8
FUN_1001700d6(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined4 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  char local_31;
  
  local_31 = '\0';
  local_40 = 0;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067935a(uVar3);
    }
    uVar3 = 0;
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') {
      uVar2 = 0xffffffce;
      goto LAB_10017015c;
    }
  }
  uVar3 = FUN_1001751bf(param_1,param_2,param_3,0,0,&local_31,&local_40);
  uVar2 = FUN_10016925a(local_40);
LAB_10017015c:
  if (param_4 != 0) {
    *(bool *)param_4 = local_31 != '\0';
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = uVar2;
  }
  FUN_10017060f(local_40);
  return uVar3;
}

