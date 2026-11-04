// name: FUN_100498c30
// address: 100498c30

undefined8 FUN_100498c30(long param_1,undefined2 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  uint local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined2 *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar8,0x10);
    if (cVar1 != '\0') {
      local_3a = "fileName != nullptr";
      goto LAB_100498e0e;
    }
  }
  else {
    *param_2 = 0;
    if ((param_1 != 0) && (*(long *)(param_1 + 8) != 0)) {
      cVar1 = FUN_100495380(*(undefined8 *)(*(long *)(param_1 + 8) + 0x10));
      if (cVar1 != '\0') {
        lVar5 = FUN_100499456(param_1);
        if (lVar5 != 0) {
          FUN_1001dccc7(lVar5);
          if (*(int *)(param_1 + 0x44) == 0) {
            uVar8 = 0xffffffd5;
          }
          else {
            iVar2 = FUN_1001de13c(lVar5,*(int *)(param_1 + 0x44),&local_48,&local_4c);
            uVar8 = 0xffffffd5;
            if (1 < local_4c && iVar2 == 0) {
              local_4c = local_4c >> 1;
              lVar7 = CONCAT44(uStack_44,local_48);
              uVar4 = 0;
              uVar6 = local_4c;
              do {
                uVar3 = uVar4;
                uVar6 = uVar6 - 1;
                uVar4 = local_4c;
                if (uVar6 == 0) goto LAB_100498e38;
                uVar4 = uVar3 + 1;
              } while (*(short *)(lVar7 + (ulong)uVar6 * 2) != 0x2f);
              lVar7 = lVar7 + (ulong)((local_4c - uVar4) + 1) * 2;
              uVar4 = uVar3;
LAB_100498e38:
              FUN_1001e3863(lVar7,uVar4,param_2);
              uVar8 = 0;
            }
          }
          FUN_1001dcd18(lVar5);
          goto LAB_100498d81;
        }
        uVar8 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar8,0x10);
        if (cVar1 != '\0') {
          local_3a = "stringCache != nullptr";
          goto LAB_100498e0e;
        }
        goto LAB_100498d72;
      }
    }
    uVar8 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar8,0x10);
    if (cVar1 != '\0') {
      local_3a = "ITImageInstanceIsValid(imageInstance)";
LAB_100498e0e:
      local_3c = 0x822;
      uStack_40 = 1;
      uStack_44 = 0x7a0a90;
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
  }
LAB_100498d72:
  FUN_1001782e9(0,0);
  uVar8 = 0xffffffce;
LAB_100498d81:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

