// name: FUN_100301c98
// address: 100301c98

long FUN_100301c98(long param_1,int param_2,int *param_3)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 local_2bc;
  int *local_2b8;
  int local_2b0;
  undefined4 uStack_2ac;
  long local_2a8;
  ulong local_2a0;
  ulong local_298;
  char local_289;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined2 local_27c;
  char *local_27a;
  long local_270;
  ulong local_268;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100301d52:
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_22a = "TrackDataIsValid(trackData)";
LAB_100301dd8:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_238 = 0x8220202;
        local_234 = "Assertion failure (expected to be true)";
        local_22c = 0x822;
        local_22a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_100301d52;
    }
    if (param_3 != (int *)0x0) {
      local_238 = local_238 & 0xffff0000;
      if ((param_3[2] != 0) && (*param_3 == *(int *)(param_1 + 0x88))) {
        if (*param_3 == 0) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_288 = 0x8220202;
            uStack_284 = 0x7a0a90;
            uStack_280 = 1;
            local_27c = 0x822;
            local_27a = "trackLocation->trackInstanceSpec.trackDataID != 0";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_288,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          lVar6 = FUN_10030252b(param_3);
          if (lVar6 != 0) goto LAB_100301e09;
        }
      }
      if ((param_2 == 0x4d46494c) || (param_2 == 0x46494c45)) {
        if ((param_2 != 0x46494c45) && (param_2 != 0x4d46494c)) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_288 = 0x8220202;
            uStack_284 = 0x7a0a90;
            uStack_280 = 1;
            local_27c = 0x822;
            local_27a = "fileLocation != nullptr";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_288,0x16);
          }
          local_298 = 0;
          FUN_1001782e9(0,0);
          goto LAB_100301ed9;
        }
        iVar4 = FUN_10017d477(param_3 + 0xb,&local_288,&local_238);
        if (iVar4 != 0) goto LAB_100301e9b;
        local_2a8 = local_270;
        if (((char)local_288 == '\0') && (local_268 != 0)) {
          local_298 = local_268 + 0x19000;
          local_2a0 = 0;
          if (0x18fff < local_268) {
            local_2a0 = local_268 - 0x19000;
          }
        }
        else {
          local_298 = 0;
          local_2a0 = 0;
        }
      }
      else {
LAB_100301e9b:
        local_298 = 0;
LAB_100301ed9:
        local_2a0 = 0;
        local_2a8 = 0;
      }
      local_289 = (short)local_238 == 0 || *(int *)(param_1 + 0x84) != 0x646f5069;
      lVar7 = FUN_1002f9fc5(param_1);
      local_2b8 = param_3 + 0xb;
      do {
        if (lVar7 == 0) {
          lVar6 = 0;
          break;
        }
        lVar8 = FUN_1002fa118(lVar7);
        if (*(int *)(lVar7 + 0x3c) != param_2) goto LAB_10030222e;
        lVar6 = lVar7;
        if (param_2 < 0x48545450) {
          if (param_2 == 0x43442020) {
            if ((((*(char *)(lVar7 + 0x44) != '\x01') ||
                 (lVar6 = *(long *)(lVar7 + 0x80),
                 (short)param_3[0x113] != *(short *)(lVar6 + 0x428))) ||
                (*(short *)((long)param_3 + 0x44e) != *(short *)(lVar6 + 0x42a))) ||
               (((cVar3 = FUN_1001c5630(param_3 + 0x114,lVar6 + 0x42c,3), cVar3 == '\0' ||
                 (cVar3 = FUN_1001c5630((long)param_3 + 0x453,lVar6 + 0x42f,3), cVar3 == '\0')) ||
                ((param_3[0x116] != *(int *)(lVar6 + 0x424) ||
                 (param_3[0x117] != *(int *)(lVar6 + 0x420))))))) goto LAB_10030222e;
            cVar3 = FUN_10017ec13(local_2b8,lVar6);
LAB_100302223:
            lVar6 = lVar7;
            if (cVar3 != '\0') break;
          }
          else {
            lVar6 = 0;
            if (param_2 != 0x46494c45) goto LAB_100302231;
LAB_100301fc7:
            if (local_289 == '\0') {
              iVar4 = FUN_100302467(lVar7,&local_288,&local_2b0);
              if (iVar4 == 0) {
                if (((int)(local_238 & 0xffff) <= local_2b0 >> 1) &&
                   (cVar3 = FUN_1001e339d((long)&local_238 + 2,(short)local_238,
                                          ((ulong)(uint)(local_2b0 >> 1) * 2 +
                                          CONCAT44(uStack_284,local_288)) -
                                          (ulong)((local_238 & 0xffff) + (local_238 & 0xffff))),
                   cVar3 != '\0')) goto LAB_100301fd4;
              }
            }
            else {
LAB_100301fd4:
              lVar6 = *(long *)(*(long *)(lVar7 + 0x80) + 0x428);
              if ((lVar6 == 0) || (local_2a8 == 0)) {
                if (((local_298 == 0) || (uVar2 = *(ulong *)(lVar7 + 0x68), uVar2 == 0)) ||
                   (uVar2 <= local_298 && local_2a0 <= uVar2)) goto LAB_1003021e0;
              }
              else if (lVar6 == local_2a8) {
LAB_1003021e0:
                if ((*(char *)(lVar7 + 0x45) == '\0') && (1 < (byte)(*(char *)(lVar7 + 0x44) - 1U)))
                {
                  FUN_1002b0559(lVar7,(lVar6 != 0) * '\x02' + -0x40);
                }
                if (*(char *)(lVar7 + 0x44) == '\x01') {
                  cVar3 = FUN_10017f77e(*(undefined8 *)(lVar7 + 0x80));
                  goto LAB_100302223;
                }
              }
            }
          }
LAB_10030222e:
          lVar6 = 0;
        }
        else if (param_2 == 0x48545450) {
          lVar1 = *(long *)(lVar7 + 8);
          iVar4 = FUN_1002b3f68(lVar7,&local_2b0,&local_2bc);
          if ((iVar4 == 0) &&
             (cVar3 = FUN_1001df8db(param_3 + 0xc,*local_2b8,CONCAT44(uStack_2ac,local_2b0),
                                    local_2bc,0), cVar3 != '\0')) {
            if ((*(byte *)(lVar1 + 0xc3) & 8) != 0) {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                local_288 = 0x8220202;
                uStack_284 = 0x7a0a90;
                uStack_280 = 1;
                local_27c = 0x822;
                local_27a = "trackInfo->isPreview == false";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_288,
                                    0x16);
              }
              FUN_1001782e9(0,0);
            }
          }
          else {
            lVar6 = 0;
          }
        }
        else if (param_2 == 0x53485244) {
          iVar4 = FUN_1002b0559(lVar7,0);
          if ((iVar4 != 0) || (iVar4 = FUN_1002b3f68(lVar7,&local_288,&local_2b0), iVar4 != 0))
          goto LAB_10030222e;
          cVar3 = FUN_1001df8db(param_3 + 0xc,*local_2b8,CONCAT44(uStack_284,local_288),local_2b0,0)
          ;
          if (cVar3 == '\0') {
            lVar6 = 0;
          }
        }
        else {
          lVar6 = 0;
          if (param_2 == 0x4d46494c) goto LAB_100301fc7;
        }
LAB_100302231:
        lVar7 = lVar8;
      } while (lVar6 == 0);
      goto LAB_100301e09;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_22a = "trackLocation != nullptr";
      goto LAB_100301dd8;
    }
  }
  lVar6 = 0;
  FUN_1001782e9(0,0);
LAB_100301e09:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar6;
}

