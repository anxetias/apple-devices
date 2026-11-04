// name: FUN_100185893
// address: 100185893

int FUN_100185893(long param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  long local_88 [3];
  ulong local_70;
  long *local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(local_88,0x18);
  plVar8 = (long *)(param_2 + 0xa8);
  local_60 = param_2;
  if (*(long *)(param_1 + 0x40) == 0) {
    iVar11 = FUN_1001ecfab(1,"",plVar8,0);
    if (iVar11 != -0x80) {
      if (iVar11 == 0) {
        *(undefined1 *)(local_60 + 0x8e) = 1;
        goto LAB_1001858e2;
      }
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        FUN_10068be9f(iVar11,uVar6);
      }
LAB_100185c89:
      if (iVar11 == 0) {
        iVar11 = 0;
        goto LAB_100185cda;
      }
    }
  }
  else {
    *plVar8 = *(long *)(param_1 + 0x40);
LAB_1001858e2:
    if (*(long *)(param_1 + 0x48) == 0) {
      iVar11 = FUN_1001ecfab(1,"",(long *)(local_60 + 0xb0),0);
      if (iVar11 == -0x80) goto LAB_100185c8e;
      if (iVar11 != 0) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          FUN_10068be33(iVar11,uVar6);
        }
        goto LAB_100185c89;
      }
      *(undefined1 *)(local_60 + 0x8f) = 1;
    }
    else {
      *(long *)(local_60 + 0xb0) = *(long *)(param_1 + 0x48);
    }
    uVar9 = *(uint *)(param_1 + 0x14);
    if (uVar9 == 0) {
      uVar9 = *(uint *)(*(long *)(param_1 + 0x268) + 0x490);
    }
    uVar7 = *(uint *)(param_1 + 0x18);
    if (uVar7 == 0) {
      uVar7 = *(uint *)(*(long *)(param_1 + 0x2b8) + 0x490);
    }
    uVar2 = uVar7;
    if (uVar7 < uVar9) {
      uVar2 = uVar9;
    }
    local_68 = plVar8;
    if (uVar2 != 0) {
      uVar10 = (ulong)uVar2;
      iVar11 = 3;
      local_70 = uVar10;
      do {
        lVar4 = FUN_1001c6429(0xa0);
        if (lVar4 == 0) {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          iVar11 = -0x6c;
          if (cVar1 != '\0') {
            FUN_10068bd47(uVar6);
          }
          goto LAB_100185be2;
        }
        lVar5 = FUN_1001c64e6(uVar10);
        *(long *)(lVar4 + 0x78) = lVar5;
        if (lVar5 == 0) {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          iVar11 = -0x6c;
          if (cVar1 != '\0') {
            FUN_10068bcd1(uVar6);
          }
          goto LAB_100185be2;
        }
        *(ulong *)(lVar4 + 0x70) = uVar10;
        *(long *)(lVar4 + 0x60) = local_60;
        *(uint *)(lVar4 + 0x80) = uVar9;
        *(uint *)(lVar4 + 0x84) = uVar7;
        uVar2 = uVar7;
        if (uVar9 == 0) {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "bufferData->maxReadSize != 0";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          *(undefined4 *)(lVar4 + 0x80) = 0x10000;
          uVar2 = *(uint *)(lVar4 + 0x84);
          uVar10 = local_70;
        }
        if (uVar2 == 0) {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "bufferData->maxWriteSize != 0";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          *(undefined4 *)(lVar4 + 0x84) = 0x10000;
          uVar10 = local_70;
        }
        FUN_1001ea897(lVar4,local_88);
        plVar8 = local_68;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      *(long *)(local_60 + 0xb8) = *(long *)(local_60 + 0x38);
      *(undefined8 *)(local_60 + 0x98) = *(undefined8 *)(*(long *)(local_60 + 0x38) + 0x20);
      *(undefined1 *)(local_60 + 0xc0) = 1;
      *(undefined4 *)(local_60 + 0xa0) = 3;
      iVar11 = 0;
      if (local_88[0] != 0) {
        do {
          lVar4 = local_88[0];
          iVar3 = FUN_1001ea9a5(local_88[0],local_88);
          if (iVar3 != 0) break;
          *(code **)(lVar4 + 0x40) = FUN_10018ab13;
          *(long *)(lVar4 + 0x48) = lVar4;
          FUN_1001ecf95(*plVar8,lVar4);
        } while (local_88[0] != 0);
      }
      goto LAB_100185cda;
    }
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    iVar11 = -0x32;
    if (cVar1 != '\0') {
      FUN_10068bdbd(uVar6);
    }
LAB_100185be2:
    FUN_1001782e9(0,0);
  }
LAB_100185c8e:
  if (local_88[0] != 0) {
    do {
      lVar4 = local_88[0];
      iVar3 = FUN_1001ea9a5(local_88[0],local_88);
      if (iVar3 != 0) break;
      if (*(long *)(lVar4 + 0x78) != 0) {
        FUN_1001c652e();
        *(undefined8 *)(lVar4 + 0x78) = 0;
      }
      FUN_1001c64c1(lVar4);
    } while (local_88[0] != 0);
  }
  FUN_100185d23(local_60);
LAB_100185cda:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar11;
}

