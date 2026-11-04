// name: FUN_1002239fe
// address: 1002239fe

undefined8
FUN_1002239fe(long param_1,int param_2,ulong param_3,undefined8 param_4,undefined8 *param_5)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined4 local_cb8;
  char *local_cb4;
  undefined2 local_cac;
  int local_caa;
  undefined1 local_c98 [1056];
  undefined4 local_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined2 local_86c;
  char *local_86a;
  uint local_458;
  undefined8 local_454;
  undefined2 local_44c;
  char *local_44a;
  char local_43f [1031];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  piVar2 = (int *)*param_5;
  if (piVar2 == (int *)0x0) {
    uVar11 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar11,0x10);
    if (cVar3 != '\0') {
      local_44a = "context != nullptr";
LAB_100223df8:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
  }
  else {
    if (*piVar2 == 0x6966646d) {
      uVar7 = 0;
      uVar11 = 0;
      if (0x6572726e < param_2) {
        if (param_2 == 0x6572726f) {
          (**(code **)(**(long **)(piVar2 + 0x84) + 0x88))
                    (*(long **)(piVar2 + 0x84),param_3 & 0xffffffff,param_1);
          FUN_1004ac981(param_1);
          goto LAB_100223c78;
        }
        if (param_2 != 0x70646f6e) goto LAB_100223c78;
        local_458 = local_458 & 0xffffff00;
        local_454 = (char *)((ulong)local_454 & 0xffffffff00000000);
        if ((*(long *)(piVar2 + 0x82) == 0) || (iVar4 = FUN_1004ab38c(param_1), iVar4 == -0x80))
        goto LAB_100223c78;
        *(undefined1 *)(param_1 + 0x69) = 0;
        *(undefined4 *)(param_1 + 0x118) = 3;
        iVar4 = FUN_100179fcc(param_4,2,&local_458);
        if (iVar4 == -0x80) {
LAB_100223e42:
          lVar9 = 0;
          lVar8 = 0;
        }
        else {
          if (iVar4 != 0) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_878 = 0x8220202;
              uStack_874 = 0x7a0a90;
              uStack_870 = 1;
              local_86c = 0x400;
              local_86a = (char *)CONCAT44(local_86a._4_4_,iVar4);
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_878,0x12);
            }
            goto LAB_100223e42;
          }
          lVar8 = FUN_100170e14(DAT_1008c4d90,(long)&local_454 + 4,(ulong)local_454 & 0xffffffff,
                                *(undefined8 *)PTR__kCFAllocatorNull_10082e028);
          if (lVar8 == 0) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_878 = 0x8220202;
              uStack_874 = 0x7a0a90;
              uStack_870 = 1;
              local_86c = 0x822;
              local_86a = "hashData != nullptr";
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_878,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            iVar4 = 0x57b;
            goto LAB_100223e42;
          }
          iVar4 = 0;
          lVar9 = FUN_1001699e7(DAT_1008c4d90,lVar8,0);
          if (lVar9 == 0) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_878 = 0x8220202;
              uStack_874 = 0x7a0a90;
              uStack_870 = 1;
              local_86c = 0x822;
              local_86a = "hashString != nullptr";
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_878,0x16)
              ;
            }
            lVar9 = 0;
            FUN_1001782e9(0,0);
            iVar4 = 0x57b;
          }
          else {
            cVar3 = FUN_100169eb1(lVar9,*(undefined8 *)(piVar2 + 0x82));
            if (cVar3 == '\0') {
              iVar4 = 0x57b;
            }
          }
        }
        FUN_10017060f(lVar9);
        FUN_10017060f(lVar8);
        *(int *)(param_1 + 0x170) = iVar4;
        *(undefined1 *)(param_1 + 0x69) = 1;
        goto LAB_100223c78;
      }
      if (param_2 == 0x64656c74) {
        FUN_10017060f(*(undefined8 *)(piVar2 + 0x82));
        if (*(long *)(piVar2 + 0x84) != 0) {
          FUN_1001ceee0();
        }
        operator_delete(piVar2);
        goto LAB_100223c78;
      }
      uVar11 = uVar7;
      if (param_2 != 0x646f6e65) goto LAB_100223c78;
      if (param_3 != 0x66696c65) {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x822;
          local_44a = "inParam1 == (void *)kDownloadDataDeliveryType_File";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        FUN_1001782e9(0,0);
      }
      piVar1 = piVar2 + 1;
      iVar4 = FUN_1001894bc(param_4,piVar1,&local_458);
      if ((iVar4 == -0x80) || (iVar4 == 0)) {
LAB_100223b7f:
        local_878 = 0x10005;
        uStack_874 = 0;
        iVar6 = _open(local_43f,0);
        if (-1 < iVar6) {
          _ffsctl(iVar6,0xc0084a44,&local_878,0);
          _close(iVar6);
        }
        (**(code **)(**(long **)(piVar2 + 0x84) + 0x80))(*(long **)(piVar2 + 0x84),&local_458,0);
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7);
        if (cVar3 != '\0') {
          local_878 = 0x8220202;
          uStack_874 = 0x7a0a90;
          uStack_870 = 1;
          local_86c = 0x400;
          local_86a = (char *)CONCAT44(local_86a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_878,0x12,uVar7
                             );
        }
        if (iVar4 != -0x30) goto LAB_100223b7f;
        uVar5 = FUN_10017d5ba(param_4,&local_878);
        iVar4 = -0x30;
        if (uVar5 != 0xffffff80) {
          if (uVar5 == 0) {
            uVar5 = FUN_10017ecc9(&local_878,piVar1,local_c98);
            if (uVar5 != 0xffffff80) {
              if (uVar5 == 0) {
                uVar5 = FUN_100182d4d(local_c98);
                if (uVar5 != 0xffffff80) {
                  if (uVar5 == 0) {
                    iVar4 = FUN_1001894bc(param_4,piVar1,&local_458);
                    if (iVar4 != -0x80) {
                      if (iVar4 == 0) {
                        iVar4 = 0;
                        goto LAB_100223b7f;
                      }
                      uVar7 = FUN_1001cc310();
                      cVar3 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar3 != '\0') {
                        local_cb8 = 0x8220202;
                        local_cb4 = "Assertion failure";
                        local_cac = 0x400;
                        local_caa = iVar4;
                        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",
                                            &local_cb8,0x12);
                      }
                    }
                    goto LAB_100223be3;
                  }
                  uVar12 = (ulong)uVar5;
                  uVar10 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar10,0x10);
                  if (cVar3 != '\0') {
                    local_caa = (int)uVar12;
                    goto LAB_10022408e;
                  }
                }
              }
              else {
                uVar12 = (ulong)uVar5;
                uVar10 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar10,0x10);
                if (cVar3 != '\0') {
                  local_caa = (int)uVar12;
                  goto LAB_10022408e;
                }
              }
            }
          }
          else {
            uVar12 = (ulong)uVar5;
            uVar10 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar10,0x10);
            if (cVar3 != '\0') {
              local_caa = (int)uVar12;
LAB_10022408e:
              local_cac = 0x400;
              local_cb4 = "Assertion failure";
              local_cb8 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_cb8,0x12,
                                  uVar7,uVar12);
            }
          }
          iVar4 = -0x30;
        }
      }
LAB_100223be3:
      if (iVar4 != 0) {
        (**(code **)(**(long **)(piVar2 + 0x84) + 0x88))(*(long **)(piVar2 + 0x84),iVar4,param_1);
        FUN_100182d4d(param_4);
      }
      goto LAB_100223c78;
    }
    uVar11 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar11,0x10);
    if (cVar3 != '\0') {
      local_44a = "context->magic == \'ifdm\'";
      goto LAB_100223df8;
    }
  }
  FUN_1001782e9(0,0);
  uVar11 = 0xffffffce;
LAB_100223c78:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar11;
}

