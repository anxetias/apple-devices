// name: FUN_1002075f9
// address: 1002075f9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1002075f9(void)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_80;
  undefined4 local_78;
  char *local_74;
  undefined2 local_6c;
  int local_6a;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined1 local_40 [32];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_48[0] = 0;
  local_44 = 0;
  local_58 = _DAT_100712d90;
  uStack_54 = _UNK_100712d94;
  uStack_50 = _UNK_100712d98;
  uStack_4c = _UNK_100712d9c;
  iVar3 = FUN_100179732(1,&local_80);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      lVar5 = 4;
      do {
        FUN_10017983e(local_80,&DAT_100712da0 + lVar5,0x90);
        lVar5 = lVar5 + 0x94;
      } while (lVar5 != 0xb94);
      lVar5 = 4;
      do {
        FUN_10017983e(local_80,&DAT_100713930 + lVar5,0x90);
        lVar5 = lVar5 + 0x94;
      } while (lVar5 != 0x39d4);
      FUN_10017983e(local_80,&DAT_100717304,0x514);
      FUN_10017983e(local_80,&DAT_10071781c,0x514);
      FUN_1001799f1(local_80,local_48);
      FUN_100179a7b(local_80);
      uVar1 = FUN_1001c5630(&local_58,local_40,0x10);
      goto LAB_100207714;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_78 = 0x8220202;
      local_74 = "Assertion failure";
      local_6c = 0x400;
      local_6a = iVar3;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_78,0x12);
    }
  }
  uVar1 = 0;
LAB_100207714:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

