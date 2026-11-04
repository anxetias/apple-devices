// name: FUN_100224afe
// address: 100224afe

undefined8
FUN_100224afe(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 local_558 [16];
  undefined1 local_548 [16];
  undefined1 local_538 [16];
  undefined1 local_528 [16];
  undefined1 local_518 [16];
  undefined1 local_508 [16];
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  undefined4 local_4d8 [2];
  undefined1 local_4d0 [8];
  undefined4 local_4c8 [2];
  undefined1 local_4c0 [8];
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  undefined1 local_498 [1056];
  undefined1 local_78 [72];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 != '\0') goto LAB_100224f12;
  FUN_1001e222d(param_3,local_78);
  cVar2 = FUN_1001e4e7c("ipsw",local_78,1);
  if (cVar2 == '\0') goto LAB_100224f12;
  local_4c8[0] = 0;
  FUN_1001c62d9(local_4c0,8);
  local_4d8[0] = 0;
  FUN_1001c62d9(local_4d0,8);
  cVar2 = (*(code *)param_5[2])(param_1,*param_5,param_5[1],local_4c8,local_4d8);
  if (cVar2 == '\0') goto LAB_100224efa;
  lVar3 = FUN_100249f90(param_5[1]);
  if (lVar3 != 0) {
    cVar2 = FUN_10024abfd(param_5[1],local_4c8);
    if (cVar2 != '\0') {
      FUN_100249ed4(local_558,local_4c8);
      FUN_100249ed4(local_548,local_4d8);
      FUN_10024f490(local_4b8,local_558,local_548,param_1);
      FUN_100249f2c(param_5 + 0x8c,local_4b8);
      FUN_100249f2c(param_5 + 0x8e,local_4a8);
      _memcpy(param_5 + 0x90,local_498,0x420);
      FUN_100249fee(local_4a8);
      FUN_100249fca(local_4b8);
      FUN_100249fee(local_548);
      FUN_100249fca(local_558);
    }
  }
  lVar3 = FUN_100249f90(param_5[1]);
  if (lVar3 == 0) {
LAB_100224d4a:
    puVar1 = param_5 + 4;
    cVar2 = FUN_10024aa49(puVar1,local_4c8);
    if (cVar2 != '\0') {
      FUN_100249f2c(param_5 + 0x8c,puVar1);
      FUN_100249f2c(param_5 + 0x8e,param_5 + 6);
      _memcpy(param_5 + 0x90,param_5 + 8,0x420);
      FUN_100249ed4(local_518,local_4c8);
      FUN_100249ed4(local_508,local_4d8);
      FUN_10024f490(local_4b8,local_518,local_508,param_1);
      FUN_100249f2c(puVar1,local_4b8);
      FUN_100249f2c(param_5 + 6,local_4a8);
      _memcpy(param_5 + 8,local_498,0x420);
      FUN_100249fee(local_4a8);
      FUN_100249fca(local_4b8);
      FUN_100249fee(local_508);
      puVar4 = local_518;
      goto LAB_100224ef5;
    }
    cVar2 = FUN_10024acd7(puVar1,local_4c8);
    if (cVar2 != '\0') {
      cVar2 = FUN_10024aa49(param_5 + 0x8c,local_4c8);
      if (cVar2 != '\0') {
        FUN_100249ed4(local_4f8,local_4c8);
        FUN_100249ed4(local_4e8,local_4d8);
        FUN_10024f490(local_4b8,local_4f8,local_4e8,param_1);
        FUN_100229eb4(param_5 + 0x8c,local_4b8);
        FUN_100249fee(local_4a8);
        FUN_100249fca(local_4b8);
        FUN_100249fee(local_4e8);
        puVar4 = local_4f8;
        goto LAB_100224ef5;
      }
    }
  }
  else {
    cVar2 = FUN_10024abfd(param_5 + 0x8c,param_5[1]);
    if (cVar2 == '\0') goto LAB_100224d4a;
    cVar2 = FUN_10024aa49(param_5 + 4,local_4c8);
    if (cVar2 == '\0') goto LAB_100224efa;
    FUN_100249ed4(local_538,local_4c8);
    FUN_100249ed4(local_528,local_4d8);
    FUN_10024f490(local_4b8,local_538,local_528,param_1);
    FUN_100229eb4(param_5 + 4,local_4b8);
    FUN_100249fee(local_4a8);
    FUN_100249fca(local_4b8);
    FUN_100249fee(local_528);
    puVar4 = local_538;
LAB_100224ef5:
    FUN_100249fca(puVar4);
  }
LAB_100224efa:
  FUN_100249fee(local_4d8);
  FUN_100249fca(local_4c8);
LAB_100224f12:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

