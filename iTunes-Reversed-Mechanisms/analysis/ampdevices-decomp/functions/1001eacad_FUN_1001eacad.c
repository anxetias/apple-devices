// name: FUN_1001eacad
// address: 1001eacad

undefined4 FUN_1001eacad(long param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c35c8(uVar3);
    }
  }
  else {
    if (param_2 != 0) {
      puVar4 = &DAT_1008a2a68;
      if (*(undefined **)(param_2 + 0x10) != (undefined *)0x0) {
        puVar4 = *(undefined **)(param_2 + 0x10);
      }
      FUN_1001e9de0(puVar4);
      uVar2 = FUN_1001ea9a5(param_1,param_2);
      FUN_1001e9eb9(puVar4);
      return uVar2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c3552(uVar3);
    }
  }
  FUN_1001782e9(0,1);
  return 0xffffffff;
}

