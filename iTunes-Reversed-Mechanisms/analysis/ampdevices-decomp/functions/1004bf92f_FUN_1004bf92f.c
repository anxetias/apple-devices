// name: FUN_1004bf92f
// address: 1004bf92f

undefined8
FUN_1004bf92f(undefined8 param_1,char *param_2,undefined8 param_3,short param_4,int *param_5)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  char local_ae0 [8];
  uint local_ad8;
  long local_ac0;
  int local_a8c;
  undefined4 local_a88;
  undefined4 uStack_a84;
  undefined4 uStack_a80;
  undefined2 local_a7c;
  char *local_a7a;
  short local_658 [256];
  undefined4 local_458 [264];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == (int *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_a7a = "cleanupParams != __null";
LAB_1004bfb12:
      local_a7c = 0x822;
      uStack_a80 = 1;
      uStack_a84 = 0x7a0a90;
      local_a88 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_a88,0x16);
    }
  }
  else if (*param_5 == 0x64636466) {
    lVar2 = *(long *)(param_5 + 2);
    if (lVar2 != 0) {
      FUN_1001c62d9(local_ae0,0x50);
      uVar5 = 0;
      if (param_4 == 1) {
        lVar7 = 0;
        if (*param_2 != '\0') {
          FUN_1001e04f5("Info.plist",local_658);
          iVar4 = FUN_10017ecc9(param_1,local_658,local_458,0);
          if (iVar4 == 0) {
            lVar7 = FUN_10016aa24(DAT_1008c4d90,local_458,0,0);
            if (lVar7 == 0) {
              FUN_100182d4d(local_458);
              goto LAB_1004bfa12;
            }
            cVar3 = FUN_100167dd2(lVar7,&cf_is_container,0);
            if (cVar3 != '\0') goto LAB_1004bfa15;
            FUN_100166ce2(lVar7,&cf_download_file_name,local_658);
            if (local_658[0] == 0) {
LAB_1004bfcbd:
              puVar6 = local_458;
LAB_1004bfcc4:
              FUN_100182d4d(puVar6);
            }
            else {
              iVar4 = FUN_10017ecc9(param_1,local_658,&local_a88,local_ae0);
              if (iVar4 != 0) goto LAB_1004bfcbd;
              cVar3 = FUN_100167dd2(lVar7,&cf_download_file_is_bundle,0);
              if (cVar3 != local_ae0[0]) goto LAB_1004bfcbd;
              if (cVar3 == '\0') {
                if (local_ac0 != 0) {
                  uVar1 = *(uint *)(param_2 + 8);
                  if (uVar1 != 0) {
                    FUN_100177cff(&local_a8c);
                    if ((uVar1 < local_a8c - 0x24ea00U) && (local_ad8 != 0)) {
                      FUN_100177cff(&local_a8c);
                      if (local_ad8 < local_a8c - 0x24ea00U) goto LAB_1004bfc97;
                    }
                  }
                  goto LAB_1004bfa15;
                }
LAB_1004bfc97:
                FUN_100182d4d(local_458);
                puVar6 = &local_a88;
                goto LAB_1004bfcc4;
              }
            }
          }
          else {
            FUN_1001c62d9(&local_a88,0x430);
            local_a88 = (undefined4)lVar2;
            uStack_a84 = (undefined4)((ulong)lVar2 >> 0x20);
            FUN_10017fdd8(param_1,1,1,FUN_1004bfcd3,&local_a88);
LAB_1004bfa12:
            lVar7 = 0;
          }
LAB_1004bfa15:
          cVar3 = FUN_10018e1ff(param_1);
          if (cVar3 != '\0') {
            FUN_100534e54(lVar2 + 0x1a8,param_1,0,1);
          }
        }
      }
      else {
        lVar7 = 0;
      }
      FUN_10017060f(lVar7);
      goto LAB_1004bfb45;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_a7a = "inDM != __null";
      goto LAB_1004bfb12;
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_a7a = "cleanupParams->magic == \'dcdf\'";
      goto LAB_1004bfb12;
    }
  }
  FUN_1001782e9(0,0);
  uVar5 = 0xffffffce;
LAB_1004bfb45:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

