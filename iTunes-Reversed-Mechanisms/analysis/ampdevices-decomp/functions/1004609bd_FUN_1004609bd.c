// name: FUN_1004609bd
// address: 1004609bd

int FUN_1004609bd(long param_1,undefined8 param_2,long *param_3)

{
  short sVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x18) == '\0') {
    lVar5 = FUN_10049bd23(uVar6);
    if (lVar5 == 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "masterAlbumPtr != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1004609ef;
    }
    *(undefined1 *)(lVar5 + 0x10) = 0;
    *(undefined1 *)(lVar5 + 0xc5) = 0;
    *(undefined4 *)(lVar5 + 0x50) = 0;
    if (*(long *)(lVar5 + 0x58) != 0) {
      FUN_1001c64c1();
      *(undefined8 *)(lVar5 + 0x58) = 0;
    }
  }
  else {
LAB_1004609ef:
    lVar5 = FUN_10049a4a2(uVar6,0,0);
    if (lVar5 == 0) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "masterAlbumPtr != nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar4 = -0x6c;
      goto LAB_100460af5;
    }
    *(undefined8 *)(lVar5 + 0x20) = 0;
    *(undefined1 *)(lVar5 + 0x10) = 1;
  }
  FUN_100169968(*(undefined4 *)(lVar5 + 0x18),lVar5 + 0x38);
  *(undefined1 *)(lVar5 + 0x11) = 1;
  sVar1 = (short)*(undefined4 *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar1 + 1;
  *(short *)(lVar5 + 0x12) = sVar1;
  uVar3 = FUN_1001ea5dc();
  *(undefined4 *)(lVar5 + 0xc0) = uVar3;
  iVar4 = FUN_10058f474(lVar5,param_2);
  if (iVar4 != -0x80) {
    if (iVar4 == 0) {
      *param_3 = lVar5;
      iVar4 = 0;
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
LAB_100460af5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

