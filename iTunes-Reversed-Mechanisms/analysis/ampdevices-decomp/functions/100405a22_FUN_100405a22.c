// name: FUN_100405a22
// address: 100405a22

int FUN_100405a22(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auVar6 [12];
  long local_1138;
  long local_1130;
  undefined1 local_1128 [1056];
  undefined4 local_d08;
  undefined4 uStack_d04;
  undefined4 uStack_d00;
  undefined2 local_cfc;
  char *local_cfa;
  undefined8 local_ca8;
  undefined1 local_ca0 [1056];
  ulong local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined8 local_860;
  undefined8 local_858;
  undefined8 local_850;
  undefined1 local_848;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100405a3a;
  auVar6 = FUN_100108310();
  lVar2 = -auVar6._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100405c2b:
    *(undefined8 *)((long)&local_38 + lVar2) = 0x100405c30;
    uVar5 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar2) = 0x100405c40;
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_cfa = "TrackDataIsValid(trackData)";
LAB_100405cfa:
      local_cfc = 0x822;
      uStack_d00 = 1;
      uStack_d04 = 0x7a0a90;
      local_d08 = 0x8220202;
      *(undefined8 *)((long)&local_38 + lVar2) = 0x100405d1f;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_d08,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      *(undefined8 *)((long)&local_38 + lVar2) = 0x100405a85;
      local_1130 = param_2;
      uVar5 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar2) = 0x100405a95;
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_d08 = 0x8220202;
        uStack_d04 = 0x7ab58c;
        uStack_d00 = 1;
        local_cfc = 0x822;
        local_cfa = "trackData->magic == \'tdat\'";
        *(undefined8 *)((long)&local_38 + lVar2) = 0x100405e21;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_d08,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar2) = 0x100405aa9;
      cVar3 = FUN_1001782e9(0,1);
      param_2 = local_1130;
      if (cVar3 == '\0') goto LAB_100405c2b;
    }
    if (*(int *)(param_1 + 0x84) == 0x646f5069) {
      if (param_2 != 0) {
        *(undefined8 *)((long)&local_38 + lVar2) = 0x100405af0;
        cVar3 = FUN_1001681c8(param_2,PTR_cf_Location_10083db20,local_1128);
        if (cVar3 == '\0') {
          *(undefined8 *)((long)&local_38 + lVar2) = 0x100405d5c;
          uVar5 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar2) = 0x100405d6c;
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_d08 = 0x8220202;
            uStack_d04 = 0x7a0a90;
            uStack_d00 = 1;
            local_cfc = 0x822;
            local_cfa = 
            "JRCFDictionaryGetFileSpec(appInfoDict, kIPhoneApplicationLocationKey, &fileSpec)";
            *(undefined8 *)((long)&local_38 + lVar2) = 0x100405ed9;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_d08,0x16);
          }
          *(undefined8 *)((long)&local_38 + lVar2) = 0x100405d7d;
          FUN_1001782e9(0,0);
          iVar4 = -0x2b;
        }
        else {
          local_1130 = CONCAT44(local_1130._4_4_,auVar6._8_4_);
          *(undefined8 *)((long)&local_38 + lVar2) = 0x100405b07;
          iVar4 = FUN_100405ee3(param_1);
          if (iVar4 != -0x80) {
            if (iVar4 == 0) {
              uVar1 = *(undefined4 *)(param_1 + 0x2c08);
              *(undefined8 *)((long)&local_38 + lVar2) = 0x100405b35;
              iVar4 = FUN_100209fde(local_1128,uVar1,&local_1138);
              if (iVar4 == -0x80) goto LAB_100405d2e;
              if (iVar4 == 0) {
                *(undefined8 *)((long)&local_38 + lVar2) = 0x100405b5e;
                FUN_1001c62d9(&local_d08,0xcc8);
                local_d08 = 1;
                uStack_d04 = 0x10;
                local_ca8 = 0x200007472616b;
                *(undefined8 *)((long)&local_38 + lVar2) = 0x100405b94;
                _memcpy(local_ca0,local_1128,0x420);
                local_880 = ((local_1138 + (ulong)*(uint *)(param_1 + 0x2c08)) - 1) /
                            (ulong)*(uint *)(param_1 + 0x2c08);
                *(undefined8 *)((long)&local_38 + lVar2) = 0x100405bc9;
                local_878 = param_4;
                local_870 = param_5;
                local_860 = FUN_1001705fc(param_2);
                *(undefined8 *)((long)&local_38 + lVar2) = 0x100405bdf;
                uVar5 = FUN_100166c1b(param_2,PTR_cf_Identifier_10083db50);
                *(undefined8 *)((long)&local_38 + lVar2) = 0x100405be7;
                local_858 = FUN_1001705fc(uVar5);
                *(undefined8 *)((long)&local_38 + lVar2) = 0x100405bf6;
                uVar5 = FUN_100209980(param_2);
                *(undefined8 *)((long)&local_38 + lVar2) = 0x100405bfe;
                local_850 = FUN_1001705fc(uVar5);
                local_848 = (undefined1)local_1130;
                *(undefined8 *)((long)&local_38 + lVar2) = 0x100405c23;
                iVar4 = FUN_100406062(param_1,0,&local_d08);
                goto LAB_100405d2e;
              }
              *(undefined8 *)((long)&local_38 + lVar2) = 0x100405e2b;
              uVar5 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar2) = 0x100405e3b;
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 == '\0') goto LAB_100405d2e;
              local_cfa = (char *)CONCAT44(local_cfa._4_4_,iVar4);
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar2) = 0x100405d8a;
              uVar5 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar2) = 0x100405d9a;
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 == '\0') goto LAB_100405d2e;
              local_cfa = (char *)CONCAT44(local_cfa._4_4_,iVar4);
            }
            local_cfc = 0x400;
            uStack_d00 = 1;
            uStack_d04 = 0x7a0a90;
            local_d08 = 0x8220202;
            *(undefined8 *)((long)&local_38 + lVar2) = 0x100405e88;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_d08,0x12);
          }
        }
        goto LAB_100405d2e;
      }
      *(undefined8 *)((long)&local_38 + lVar2) = 0x100405cbf;
      uVar5 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar2) = 0x100405ccf;
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_cfa = "appInfoDict != nullptr";
        goto LAB_100405cfa;
      }
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar2) = 0x100405c79;
      uVar5 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar2) = 0x100405c89;
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_cfa = "trackData->trackDataKind == kTrackDataKind_iPod";
        goto LAB_100405cfa;
      }
    }
  }
  *(undefined8 *)((long)&local_38 + lVar2) = 0x100405d28;
  FUN_1001782e9(0,0);
  iVar4 = -0x32;
LAB_100405d2e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((long)&local_38 + lVar2) = FUN_100405ee3;
  ___stack_chk_fail();
}

