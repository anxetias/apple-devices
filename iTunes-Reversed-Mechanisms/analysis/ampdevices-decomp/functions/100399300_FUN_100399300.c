// name: FUN_100399300
// address: 100399300

int FUN_100399300(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long local_1360;
  undefined1 local_1358 [3072];
  undefined1 local_758 [1024];
  undefined1 local_358 [512];
  char local_158 [256];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100399318;
  lVar5 = FUN_100108310();
  lVar5 = -lVar5;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  pcVar1 = *(code **)*param_1;
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100399335;
  iVar4 = (*pcVar1)();
  if (iVar4 == -0x80) goto LAB_1003995c5;
  if (iVar4 == 0) {
    if (param_1[1] == 0) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003993fd;
      uVar6 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10039940d;
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "mPodController != nullptr";
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100399693;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10039941e;
      FUN_1001782e9(0,0);
    }
    else {
      pcVar1 = *(code **)(*param_1 + 0x28);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100399361;
      cVar3 = (*pcVar1)(param_1,0,0,0,0);
      if (cVar3 == '\0') {
        if (param_2 != 0) {
          if (*(int *)(param_2 + 0x680) != 0x7572646d) {
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10039943e;
            uVar6 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10039944e;
            cVar3 = _os_log_type_enabled(uVar6,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7ab58c;
              uStack_50 = 1;
              local_4c = 0x822;
              local_4a = "updateRestoreDeviceSpec->magic == ((OSType) \'urdm\')";
              *(undefined8 *)((long)&local_38 + lVar5) = 0x10039981f;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            *(undefined8 *)((long)&local_38 + lVar5) = 0x100399462;
            cVar3 = FUN_1001782e9(0,1);
            if (cVar3 == '\0') goto LAB_10039959a;
          }
          if (*(long *)(param_2 + 0x658) == 0) {
            *(undefined8 *)((long)&local_38 + lVar5) = 0x1003995f2;
            uVar6 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar5) = 0x100399602;
            cVar3 = _os_log_type_enabled(uVar6,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x822;
              local_4a = "updateRestoreDeviceSpec->fireWireGUID != 0";
              *(undefined8 *)((long)&local_38 + lVar5) = 0x10039986d;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            *(undefined8 *)((long)&local_38 + lVar5) = 0x100399613;
            FUN_1001782e9(0,0);
            iVar4 = 0x5da;
            goto LAB_1003995c5;
          }
          if (*(long *)(param_2 + 0x660) == 0) {
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10039961f;
            uVar6 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10039962f;
            cVar3 = _os_log_type_enabled(uVar6,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x822;
              local_4a = "updateRestoreDeviceSpec->serialNumber != 0";
              *(undefined8 *)((long)&local_38 + lVar5) = 0x10039990c;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            *(undefined8 *)((long)&local_38 + lVar5) = 0x100399640;
            FUN_1001782e9(0,0);
            iVar4 = 0x5db;
            goto LAB_1003995c5;
          }
          pcVar1 = *(code **)(*param_1 + 0x10);
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10039948f;
          iVar4 = (*pcVar1)(param_1);
          if (iVar4 == -0x80) goto LAB_1003995c5;
          if (iVar4 == 0) {
            uVar6 = *(undefined8 *)(param_2 + 0x658);
            *(undefined8 *)((long)&local_38 + lVar5) = 0x1003994c6;
            _snprintf(local_158,0x100,"%016llX",uVar6);
            *(undefined8 *)((long)&local_38 + lVar5) = 0x1003994d5;
            iVar4 = FUN_1001e0701(local_158,local_358);
            if (iVar4 == -0x80) goto LAB_1003995c5;
            if (iVar4 == 0) {
              *(undefined8 *)((long)&local_38 + lVar5) = 0x100399503;
              iVar4 = FUN_1001823de((void *)(param_2 + 0x218),local_1358,0xbfd);
              if (iVar4 == -0x80) goto LAB_1003995c5;
              if (iVar4 == 0) {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10039952e;
                iVar4 = FUN_1001e5932(local_1358,local_758,0x1ff);
                if (iVar4 == -0x80) goto LAB_1003995c5;
                if (iVar4 == 0) {
                  lVar2 = param_1[1];
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10039955f;
                  iVar4 = _VVVCreatePodWithID(lVar2,local_358,local_758,&local_1360);
                  if (iVar4 == 0) {
                    param_1[0x87] = local_1360;
                    param_1[0x88] = *(long *)(param_2 + 0x658);
                    param_1[0x89] = *(long *)(param_2 + 0x208);
                    param_1[0x8b] = *(long *)(param_2 + 0x660);
                    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x204);
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x1003999bb;
                    FUN_1001e1c39(param_2 + 4,(long)param_1 + 0x466);
                    iVar4 = (int)param_1[0x89];
                    if (iVar4 == 0) {
                      iVar4 = *(int *)((long)param_1 + 0x44c);
                    }
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x1003999d4;
                    uVar6 = FUN_100425f2b(iVar4);
                    local_58 = (undefined4)uVar6;
                    uStack_54 = (undefined4)((ulong)uVar6 >> 0x20);
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x1003999e7;
                    FUN_1001b81f2(param_1 + 0xcd,uVar6);
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x1003999f0;
                    FUN_10016d588(&local_58);
                    *(undefined1 *)(param_1 + 0xcf) = *(undefined1 *)(param_2 + 0x668);
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x100399a12;
                    _memcpy(param_1 + 0xd0,(void *)(param_2 + 0x218),0x420);
                    iVar4 = 0;
                    if (*(short *)((long)param_1 + 0x466) == 0) {
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x100399a32;
                      FUN_1001e04f5("iPod",(long)param_1 + 0x466);
                    }
                  }
                  else {
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10039956e;
                    uVar6 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10039957e;
                    cVar3 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar3 != '\0') {
                      local_58 = 0x8220202;
                      uStack_54 = 0x7a0a90;
                      uStack_50 = 1;
                      local_4c = 0x822;
                      local_4a = "result == eVVVUpdateSuccess";
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x100399a80;
                      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10039958f;
                    FUN_1001782e9(0,0);
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x100399596;
                    iVar4 = FUN_100399136(iVar4);
                  }
                  goto LAB_1003995c5;
                }
                *(undefined8 *)((long)&local_38 + lVar5) = 0x100399916;
                uVar6 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar5) = 0x100399926;
                cVar3 = _os_log_type_enabled(uVar6,0x10);
                if (cVar3 == '\0') goto LAB_1003995c5;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
              }
              else {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x100399877;
                uVar6 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar5) = 0x100399887;
                cVar3 = _os_log_type_enabled(uVar6,0x10);
                if (cVar3 == '\0') goto LAB_1003995c5;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
              }
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar5) = 0x10039978a;
              uVar6 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar5) = 0x10039979a;
              cVar3 = _os_log_type_enabled(uVar6,0x10);
              if (cVar3 == '\0') goto LAB_1003995c5;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
            }
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10039969d;
            uVar6 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar5) = 0x1003996ad;
            cVar3 = _os_log_type_enabled(uVar6,0x10);
            if (cVar3 == '\0') goto LAB_1003995c5;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
          }
          goto LAB_1003993e0;
        }
LAB_10039959a:
        *(undefined8 *)((long)&local_38 + lVar5) = 0x10039959f;
        uVar6 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003995af;
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "::UpdateRestoreDeviceSpecIsValid(updateRestoreDeviceSpec)";
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100399780;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003995c0;
        FUN_1001782e9(0,0);
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x10039936e;
        uVar6 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar5) = 0x10039937e;
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "IsRestoreOrUpdateInProgress() == false";
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100399732;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x10039938f;
        FUN_1001782e9(0,0);
      }
    }
    iVar4 = -0x32;
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100399399;
    uVar6 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1003993a9;
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 == '\0') goto LAB_1003995c5;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
LAB_1003993e0:
    uStack_50 = 1;
    uStack_54 = 0x7a0a90;
    local_4c = 0x400;
    local_58 = 0x8220202;
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1003993f3;
    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
  }
LAB_1003995c5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_38 + lVar5) = &UNK_100399a8a;
  ___stack_chk_fail();
}

