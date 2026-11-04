// name: FUN_1002bdfcb
// address: 1002bdfcb

byte FUN_1002bdfcb(long param_1,undefined1 param_2,char param_3,byte param_4,uint param_5,
                  uint param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((((*(byte *)(param_1 + 0x240) & 4) == 0) &&
       (cVar1 = FUN_1002bddb8(param_1,param_2), cVar1 != '\0')) &&
      (((*(byte *)(*(long *)(param_1 + 8) + 0x1bb4) & 0x40) == 0 ||
       (bVar2 = FUN_100482222(param_1,1), (bVar2 & param_4) != 0)))) &&
     (*(short *)(param_1 + 0x10) != 10)) {
    if (((~param_5 & 0xfe182321) == 0) && ((*(byte *)(param_1 + 0x298) & 1) != 0)) {
      if (*(long *)(param_1 + 0x2a8) == 0) {
        bVar2 = 1;
      }
      else {
        bVar2 = FUN_1002c245f(*(long *)(param_1 + 0x2a8),*(undefined8 *)(param_1 + 8),param_5,
                              param_6);
        bVar2 = bVar2 ^ 1;
      }
      goto LAB_1002be03a;
    }
    for (lVar4 = FUN_100485529(param_1); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x18)) {
      lVar5 = FUN_100242590(lVar4);
      if (lVar5 == 0) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "trackInfo != nullptr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        lVar6 = FUN_100597c13(lVar5,0);
        if (((lVar6 != 0) && (cVar1 = FUN_1002bd404(lVar6), cVar1 != '\0')) &&
           (uVar3 = FUN_1004744bf(lVar5), (uVar3 & param_6) == 0 && (uVar3 & param_5) != 0)) {
          cVar1 = FUN_100474d03(lVar5);
          bVar2 = 1;
          if ((param_3 != '\0') || (cVar1 == '\0')) goto LAB_1002be03a;
        }
      }
    }
  }
  bVar2 = 0;
LAB_1002be03a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

