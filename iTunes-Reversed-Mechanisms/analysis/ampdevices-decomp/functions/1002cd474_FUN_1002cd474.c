// name: FUN_1002cd474
// address: 1002cd474

/* WARNING: Type propagation algorithm not settling */

int FUN_1002cd474(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  uint local_60;
  int local_5c [2];
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 8) != 0x61616365) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_5c[1] = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mMagic == kAACEncoderMagic";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",local_5c + 1,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
    goto LAB_1002cd7e2;
  }
  local_70 = *(int *)(param_1 + 0x14) * (int)param_2[1] * *(int *)(param_1 + 0x3c);
  local_68 = 1;
  iVar3 = _AudioCodecAppendInputData
                    (*(undefined8 *)(param_1 + 0x300),*param_2,&local_70,&local_68,0);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      uVar4 = local_70 / (uint)(*(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x14));
      *(uint *)(param_2 + 4) = uVar4;
      *(undefined4 *)((long)param_2 + 0x24) = 0;
      uVar5 = *(uint *)(param_2 + 1);
      local_6c = *(undefined4 *)(param_1 + 0x38);
      local_68 = 1;
      iVar3 = _AudioCodecProduceOutputPackets
                        (*(undefined8 *)(param_1 + 0x300),*(undefined8 *)((long)param_2 + 0xc),
                         &local_6c,&local_68,0,local_5c);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          if ((local_5c[0] == 2) || (local_5c[0] == 4)) {
            *(undefined4 *)((long)param_2 + 0x24) = local_6c;
            if (local_5c[0] == 4) {
LAB_1002cd585:
              *(undefined1 *)(param_1 + 0x360) = 1;
              *(int *)(param_1 + 0x2c4) = *(int *)(param_1 + 0x2c4) + (int)param_2[4];
              iVar3 = 0;
              if (uVar4 == uVar5) {
                if (((*(long *)(param_1 + 0x1e0) != 0) && (0x3ff < *(uint *)(param_2 + 1))) &&
                   (uVar5 = *(uint *)(param_2 + 1) & 0xfffffc00, uVar5 != 0)) {
                  iVar7 = *(int *)((long)param_2 + 0x1c);
                  lVar8 = *param_2;
                  iVar1 = *(int *)(param_1 + 0x14);
                  uVar4 = 0;
                  local_60 = uVar5;
                  do {
                    local_64 = iVar7;
                    iVar3 = FUN_1002e922d(*(undefined8 *)(param_1 + 0x1e0),lVar8,iVar1);
                    if (iVar3 != 0) {
                      if (iVar3 != -0x80) {
                        uVar6 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar6,0x10);
                        if (cVar2 != '\0') {
                          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                          goto LAB_1002cd6fa;
                        }
                      }
                      break;
                    }
                    iVar1 = *(int *)(param_1 + 0x14);
                    lVar8 = lVar8 + (ulong)(uint)(iVar1 << 10) * 4;
                    uVar4 = uVar4 + 0x400;
                    iVar7 = local_64 + (int)(0xfa000 / (ulong)*(uint *)(param_1 + 0x28));
                  } while (uVar4 < local_60);
                }
              }
              else if (*(long *)(param_1 + 0x1e0) != 0) {
                FUN_1002ea25a();
                *(undefined8 *)(param_1 + 0x1e0) = 0;
              }
            }
            else {
              iVar3 = FUN_10022fba2(param_1,local_6c,*(undefined4 *)(param_1 + 0x30));
              if (iVar3 != -0x80) {
                if (iVar3 == 0) goto LAB_1002cd585;
                uVar6 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar6,0x10);
                if (cVar2 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                  goto LAB_1002cd6fa;
                }
              }
            }
          }
          else {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_5c[1] = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = 
              "codecStatus == kAudioCodecProduceOutputPacketSuccess || codecStatus == kAudioCodecProduceOutputPacketNeedsMoreInputData"
              ;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",local_5c + 1,0x16
                                 );
            }
            FUN_1001782e9(0,0);
            iVar3 = local_5c[0];
          }
        }
        else {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
            goto LAB_1002cd6fa;
          }
        }
      }
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
LAB_1002cd6fa:
        local_4c = 0x400;
        local_54 = "Assertion failure";
        local_5c[1] = 0x8220202;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",local_5c + 1,0x12);
      }
    }
  }
  *(long *)(param_1 + 0x48) = *(long *)((long)param_2 + 0xc) - *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)((long)param_2 + 0x14);
  *(long *)(param_1 + 0x58) = (long)*(int *)((long)param_2 + 0x24) + *(long *)(param_1 + 0x58);
LAB_1002cd7e2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

