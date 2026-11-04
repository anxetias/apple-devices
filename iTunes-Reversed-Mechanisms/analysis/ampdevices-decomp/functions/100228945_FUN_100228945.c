// name: FUN_100228945
// address: 100228945

int FUN_100228945(undefined8 param_1,long param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  size_t sVar5;
  char *pcVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 local_1280;
  char local_1278 [4];
  char *local_1274;
  undefined2 local_126c;
  char *local_126a;
  undefined1 local_e58 [512];
  char local_c58 [1024];
  char local_858 [1024];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  int local_44a;
  char local_438 [8];
  undefined4 uStack_430;
  undefined2 local_42c;
  undefined2 local_42a;
  undefined2 uStack_428;
  undefined4 uStack_426;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x10022895d;
  auVar8 = FUN_100108310();
  lVar1 = -auVar8._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x100228acb;
    uVar4 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar1) = 0x100228adb;
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      builtin_strncpy(local_1278,"\x02\x02\"\b",4);
      local_1274 = "Assertion failure";
      local_126c = 0x822;
      local_126a = "outCarrierBundleFileSpec != nullptr";
      *(undefined8 *)((long)&local_38 + lVar1) = 0x100228c43;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_1278,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar1) = 0x100228aec;
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x10022898e;
    FUN_1001c62d9(param_2,0x420);
    if (auVar8._8_8_ != 0) {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1002289a6;
      iVar3 = FUN_100220c77(param_1,local_e58);
      if (iVar3 == -0x80) goto LAB_100228b1a;
      if (iVar3 != 0) {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100228b48;
        uVar4 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100228b58;
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 == '\0') goto LAB_100228b1a;
        pcVar6 = local_1278;
        builtin_strncpy(local_1278,"\x02\x02\"\b",4);
        local_1274 = "Assertion failure";
        local_126c = 0x400;
        local_126a = (char *)CONCAT44(local_126a._4_4_,iVar3);
LAB_100228bdf:
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100228bf2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",pcVar6,0x12);
        goto LAB_100228b1a;
      }
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1002289d1;
      iVar3 = FUN_1003870d4(0x2f,3,local_1278);
      if (iVar3 == -0x80) goto LAB_100228b1a;
      if (iVar3 != 0) {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100228b95;
        uVar4 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100228ba5;
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 == '\0') goto LAB_100228b1a;
        pcVar6 = local_438;
        local_438[0] = '\x02';
        local_438[1] = '\x02';
        local_438[2] = '\"';
        local_438[3] = '\b';
        local_438[4] = -0x70;
        local_438[5] = '\n';
        local_438[6] = 'z';
        local_438[7] = '\0';
        uStack_430 = 1;
        local_42c = 0x400;
        local_42a = (undefined2)iVar3;
        uStack_428 = (undefined2)((uint)iVar3 >> 0x10);
        goto LAB_100228bdf;
      }
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1002289fe;
      iVar3 = FUN_10017ecc9(local_1278,local_e58,param_2,0);
      if (iVar3 != 0) goto LAB_100228b1a;
      local_1280 = 0;
      *(undefined8 *)((long)&local_38 + lVar1) = 0x100228a29;
      iVar3 = FUN_1001f7388(param_2,1);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          local_858[0] = '\0';
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100228a54;
          iVar3 = FUN_1001f7ba5(0);
          if (iVar3 == 0) {
            do {
              *(undefined8 *)((long)&local_38 + lVar1) = 0x100228d1e;
              iVar3 = FUN_1001f802f(0,local_438,0x400);
              if (iVar3 != 0) {
                if (iVar3 == -0x80) goto LAB_100228e69;
                *(undefined8 *)((long)&local_38 + lVar1) = 0x100228f51;
                uVar4 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar1) = 0x100228f61;
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 != '\0') {
                  local_458 = 0x8220202;
                  local_454 = "Assertion failure";
                  local_44c = 0x400;
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x100228fae;
                  local_44a = iVar3;
                  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_458,
                                      0x12);
                }
                break;
              }
              *(undefined8 *)((long)&local_38 + lVar1) = 0x100228d31;
              sVar5 = _strlen(local_438);
              if (8 < sVar5) {
                *(undefined8 *)((long)&local_38 + lVar1) = 0x100228d47;
                iVar3 = _strncasecmp(local_438,"Payload/",8);
                if (iVar3 == 0) {
                  for (pcVar6 = (char *)&uStack_430; *pcVar6 != '\0'; pcVar6 = pcVar6 + 1) {
                    if (*pcVar6 == '/') {
                      *pcVar6 = '\0';
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x100228d92;
                      _strlcpy(local_858,(char *)&uStack_430,0x400);
                      goto LAB_100228d92;
                    }
                  }
                }
              }
              *(undefined8 *)((long)&local_38 + lVar1) = 0x100228d53;
              iVar3 = FUN_1001f7c48(0);
            } while (iVar3 == 0);
          }
          if (iVar3 == -0x80) {
LAB_100228e69:
            lVar7 = 0;
          }
          else {
            if (iVar3 != 0) {
              *(undefined8 *)((long)&local_38 + lVar1) = 0x100228a77;
              uVar4 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar1) = 0x100228a87;
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                local_42a = (undefined2)iVar3;
                uStack_428 = (undefined2)((uint)iVar3 >> 0x10);
LAB_100228e4a:
                local_42c = 0x400;
                uStack_430 = 1;
                local_438[4] = -0x70;
                local_438[5] = '\n';
                local_438[6] = 'z';
                local_438[7] = '\0';
                local_438[0] = '\x02';
                local_438[1] = '\x02';
                local_438[2] = '\"';
                local_438[3] = '\b';
                *(undefined8 *)((long)&local_38 + lVar1) = 0x100228e5d;
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_438,0x12)
                ;
              }
              goto LAB_100228e69;
            }
LAB_100228d92:
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100228db6;
            _snprintf(local_c58,0x400,"Payload/%s/Info.plist",local_858);
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100228dce;
            iVar3 = FUN_1001fbd49(0,local_c58,0,&local_1280);
            if (iVar3 == -0x80) goto LAB_100228e69;
            if (iVar3 != 0) {
              *(undefined8 *)((long)&local_38 + lVar1) = 0x100228e04;
              uVar4 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar1) = 0x100228e14;
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                local_42a = (undefined2)iVar3;
                uStack_428 = (undefined2)((uint)iVar3 >> 0x10);
                goto LAB_100228e4a;
              }
              goto LAB_100228e69;
            }
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100228df2;
            uVar4 = FUN_100166c1b(local_1280,&cf_CFBundleVersion);
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100228dfa;
            lVar7 = FUN_1001705fc(uVar4);
          }
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100228e78;
          FUN_1001f7652(0);
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100228e84;
          FUN_10017060f(local_1280);
          if (lVar7 != 0) {
            builtin_strncpy(local_438,"dmvs",4);
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100228e9b;
            uVar4 = FUN_1001705fc(lVar7);
            uStack_430 = (undefined4)uVar4;
            local_42c = (undefined2)((ulong)uVar4 >> 0x20);
            local_42a = (undefined2)((ulong)uVar4 >> 0x30);
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100228eae;
            FUN_100249f2c(auVar8._8_8_);
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100228eba;
            FUN_100249fca(local_438);
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100228ec2;
            FUN_10017060f(lVar7);
            iVar3 = 0;
            goto LAB_100228b1a;
          }
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100228c9e;
          uVar4 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100228cae;
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_438[0] = '\x02';
            local_438[1] = '\x02';
            local_438[2] = '\"';
            local_438[3] = '\b';
            local_438[4] = -0x70;
            local_438[5] = '\n';
            local_438[6] = 'z';
            local_438[7] = '\0';
            uStack_430 = 1;
            local_42c = 0x400;
            local_42a = (undefined2)iVar3;
            uStack_428 = (undefined2)((uint)iVar3 >> 0x10);
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100228cfb;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_438,0x12);
          }
        }
      }
      *(undefined8 *)((long)&local_38 + lVar1) = 0x100228ecf;
      uVar4 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar1) = 0x100228edf;
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_438[0] = '\x02';
        local_438[1] = '\x02';
        local_438[2] = '\"';
        local_438[3] = '\b';
        local_438[4] = -0x70;
        local_438[5] = '\n';
        local_438[6] = 'z';
        local_438[7] = '\0';
        uStack_430 = 1;
        local_42c = 0x822;
        local_42a = 0x1fe0;
        uStack_428 = 0x7b;
        uStack_426 = 1;
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100228f4a;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_438,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar1) = 0x100228eec;
      FUN_1001782e9(0,0);
      *(undefined8 *)((long)&local_38 + lVar1) = 0x100228ef3;
      FUN_10017060f(0);
      iVar3 = -0x2b;
      goto LAB_100228b1a;
    }
    *(undefined8 *)((long)&local_38 + lVar1) = 0x100228af3;
    uVar4 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar1) = 0x100228b03;
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      builtin_strncpy(local_1278,"\x02\x02\"\b",4);
      local_1274 = "Assertion failure";
      local_126c = 0x822;
      local_126a = "outSoftwareVersion != nullptr";
      *(undefined8 *)((long)&local_38 + lVar1) = 0x100228c94;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_1278,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar1) = 0x100228b14;
    FUN_1001782e9(0,0);
  }
  iVar3 = -0x32;
LAB_100228b1a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_38 + lVar1) = &UNK_100228fb8;
    ___stack_chk_fail();
  }
  return iVar3;
}

