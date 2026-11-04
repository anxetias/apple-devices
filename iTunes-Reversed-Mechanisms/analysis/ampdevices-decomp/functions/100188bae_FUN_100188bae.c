// name: FUN_100188bae
// address: 100188bae

undefined4
FUN_100188bae(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 local_40 [16];
  
  FUN_1001b7b04(local_40);
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068e393(uVar3);
    }
    uVar2 = 0xffffffce;
    FUN_1001782e9(0,0);
  }
  else {
    uVar2 = FUN_1001889d4(param_1,local_40,param_3,param_4,param_5);
  }
  FUN_1001b7a50(local_40);
  return uVar2;
}

