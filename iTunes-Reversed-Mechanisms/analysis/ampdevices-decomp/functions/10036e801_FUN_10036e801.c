// name: FUN_10036e801
// address: 10036e801

undefined8 FUN_10036e801(int *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined4 local_58;
  int local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 local_4c;
  int local_4a;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined6 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0();
  if ((cVar1 == '\0') || (*param_1 != 0x41464350)) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      pcVar10 = "JRFileSpecIsAFCPath(spec)";
LAB_10036ea33:
      local_4c = 0x822;
      uStack_4e = 0;
      uStack_50 = 1;
      local_54 = 0x7a0a90;
      local_58 = 0x8220202;
      local_4a = (int)pcVar10;
      uStack_46 = (undefined2)((ulong)pcVar10 >> 0x20);
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      lVar3 = FUN_10036f8fa(param_1[6]);
      if (lVar3 == 0) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4e = 0;
          local_4c = 0x822;
          local_4a = 0x7c589d;
          uStack_46 = 1;
          uStack_44 = 0;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        uVar6 = 0xffffffdd;
        goto LAB_10036e949;
      }
      lVar4 = FUN_10036d2f1(lVar3,0);
      if (lVar4 == 0) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4e = 0;
          local_4c = 0x822;
          local_4a = 0x7c5917;
          uStack_46 = 1;
          uStack_44 = 0;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x17ffbfe9;
LAB_10036ea8c:
        uVar6 = 0;
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_10036e72b(param_1);
        if (lVar5 == 0) {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4e = 0;
            local_4c = 0x822;
            local_4a = 0x7a0ee9;
            uStack_46 = 1;
            uStack_44 = 0;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar2 = -0x17ffbffd;
          goto LAB_10036ea8c;
        }
        uVar6 = _AFCOperationCreateGetFileHash(DAT_1008c4d90,lVar5,0);
        iVar2 = FUN_10036ed41(lVar4,uVar6);
        if (iVar2 == -0x80) {
LAB_10036eab1:
          cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x4000302;
            uStack_50 = 0x842;
            uStack_4e = (undefined2)lVar5;
            local_4c = (undefined2)((ulong)lVar5 >> 0x10);
            local_4a = (int)((ulong)lVar5 >> 0x20);
            uStack_46 = 0x800;
            uStack_44 = (undefined2)lVar4;
            uStack_42 = (undefined6)((ulong)lVar4 >> 0x10);
            local_54 = iVar2;
            __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                "AFC GetFileHash failed (0x%08X) for \"%{public}@\" with connection %p"
                                ,&local_58,0x1c);
          }
        }
        else {
          if (iVar2 != 0) {
            uVar7 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar7,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4e = 0;
              local_4c = 0x400;
              local_4a = iVar2;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
            goto LAB_10036eab1;
          }
          uVar7 = _AFCOperationGetResultObject(uVar6);
          lVar8 = FUN_1001705e9(uVar7);
          lVar9 = _CFDataGetTypeID();
          if (lVar8 == lVar9) {
            lVar8 = FUN_100170ef7(uVar7);
            if (lVar8 != 0x14) {
              uVar7 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar7,0x10);
              if (cVar1 != '\0') {
                pcVar10 = "JRCFDataGetLength(hashData) == kAFCFileHashSize";
                goto LAB_10036ed12;
              }
              goto LAB_10036ebce;
            }
            uVar7 = FUN_100170f3b(uVar7);
            FUN_1001c631b(uVar7,param_2,0x14);
            iVar2 = 0;
          }
          else {
            uVar7 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar7,0x10);
            if (cVar1 != '\0') {
              pcVar10 = "JRCFGetTypeID(hashData) == CFDataGetTypeID()";
LAB_10036ed12:
              local_4c = 0x822;
              uStack_4e = 0;
              uStack_50 = 1;
              local_54 = 0x7a0a90;
              local_58 = 0x8220202;
              local_4a = (int)pcVar10;
              uStack_46 = (undefined2)((ulong)pcVar10 >> 0x20);
              uStack_44 = 0;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
LAB_10036ebce:
            FUN_1001782e9(0,0);
            iVar2 = -0x17ffbfe9;
          }
        }
      }
      FUN_10017060f(uVar6);
      FUN_10017060f(lVar5);
      FUN_10017060f(lVar4);
      FUN_10036d4d2(lVar3);
      uVar6 = FUN_10036db97(iVar2);
      goto LAB_10036e949;
    }
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      pcVar10 = "hash != nullptr";
      goto LAB_10036ea33;
    }
  }
  FUN_1001782e9(0,0);
  uVar6 = 0xffffffce;
LAB_10036e949:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

