// name: FUN_1005cfc60
// address: 1005cfc60

int FUN_1005cfc60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,ulong param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  double *pdVar5;
  undefined4 *puVar6;
  undefined1 auVar7 [16];
  undefined4 local_83b8;
  undefined4 uStack_83b4;
  undefined4 uStack_83b0;
  undefined4 uStack_83ac;
  undefined4 local_83a8;
  undefined4 uStack_83a4;
  uint uStack_83a0;
  undefined4 uStack_839c;
  double local_8398;
  double local_8390;
  int iStack_8388;
  undefined4 uStack_8374;
  double local_8368;
  undefined4 local_8360;
  undefined4 local_835c;
  undefined4 local_834c;
  undefined4 local_8348;
  undefined4 local_8340 [2];
  undefined4 local_8338;
  undefined4 local_8334;
  undefined4 *local_8330;
  undefined4 local_8324;
  undefined8 local_8320;
  long local_8318;
  int local_830c;
  long local_8308;
  undefined4 local_82fc;
  undefined4 local_82f8;
  char *local_82f4;
  undefined2 local_82ec;
  int local_82ea;
  undefined4 local_82d8;
  char *local_82d4;
  undefined2 local_82cc;
  int local_82ca;
  undefined1 local_2d8 [512];
  undefined1 local_d8 [80];
  undefined1 local_88 [72];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1005cfc78;
  local_8324 = param_5;
  auVar7 = FUN_100108310();
  local_8320 = auVar7._8_8_;
  lVar1 = -auVar7._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_8308 = 0;
  local_8318 = 0;
  if (param_7 != 0) {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1005cfcc2;
    FUN_1001e9de0();
  }
  *(undefined8 *)((long)&local_38 + lVar1) = 0x1005cfcd4;
  iVar3 = FUN_1003cf9aa(param_4,param_6 & 0xffffffff,local_2d8);
  if (iVar3 == -0x80) goto LAB_1005d0387;
  if (iVar3 == 0) {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1005cfcfc;
    iVar3 = FUN_1003cfb06(local_8320,local_2d8);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1005cfd0d;
      uVar4 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1005cfd1d;
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_82d8 = 0x8220202;
        local_82d4 = "Assertion failure";
        local_82cc = 0x400;
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d01d7;
        local_82ca = iVar3;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_82d8,0x12);
      }
    }
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1005cfd31;
    iVar3 = FUN_10018e4a1(param_2,local_88);
    if (iVar3 == -0x80) goto LAB_1005d0387;
    if (iVar3 == 0) {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1005cfd56;
      iVar3 = _ExtAudioFileOpen(local_88,&local_8308);
      if (iVar3 == -0x80) goto LAB_1005d0387;
      if (iVar3 == 0) {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1005cfd7f;
        FUN_1001c62d9(&local_8390,0x28);
        local_82fc = 0x28;
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1005cfda0;
        iVar3 = _ExtAudioFileGetProperty(local_8308,0x66666d74,&local_82fc,&local_8390);
        if (iVar3 == -0x80) goto LAB_1005d0387;
        if (iVar3 == 0) {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1005cfdc8;
          iVar3 = FUN_10018e4a1(local_8320,local_d8);
          if (iVar3 == -0x80) goto LAB_1005d0387;
          if (iVar3 == 0) {
            *(undefined8 *)((long)&local_38 + lVar1) = 0x1005cfdf1;
            FUN_1001c62d9(&local_8368,0x28);
            local_8360 = local_8324;
            local_8368 = (double)*(uint *)(param_1 + 8);
            local_834c = uStack_8374;
            if ((int)param_6 == 0x57415645) {
              local_8348 = 0x10;
              local_835c = 0xc;
            }
            local_82fc = 0x28;
            *(undefined8 *)((long)&local_38 + lVar1) = 0x1005cfe55;
            iVar3 = _AudioFormatGetProperty(0x666d7469,0,0,&local_82fc,&local_8368);
            if (iVar3 == -0x80) goto LAB_1005d0387;
            if (iVar3 == 0) {
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1005cfe76;
              uVar4 = FUN_1001e5b1d(local_2d8);
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1005cfe9f;
              iVar3 = _ExtAudioFileCreateNew
                                (local_d8,uVar4,param_6 & 0xffffffff,&local_8368,0,&local_8318);
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1005cfeaa;
              FUN_10017060f(uVar4);
              if (iVar3 == -0x80) goto LAB_1005d0387;
              if (iVar3 == 0) {
                pdVar5 = &local_8368;
                if (iStack_8388 == 0x6c70636d) {
                  pdVar5 = &local_8390;
                }
                local_83b8 = *(undefined4 *)pdVar5;
                uStack_83b4 = *(undefined4 *)((long)pdVar5 + 4);
                uStack_83b0 = *(undefined4 *)(pdVar5 + 1);
                uStack_83ac = *(undefined4 *)((long)pdVar5 + 0xc);
                local_83a8 = *(undefined4 *)(pdVar5 + 2);
                uStack_83a4 = *(undefined4 *)((long)pdVar5 + 0x14);
                uStack_83a0 = *(uint *)(pdVar5 + 3);
                uStack_839c = *(undefined4 *)((long)pdVar5 + 0x1c);
                local_8398 = pdVar5[4];
                local_82fc = 0x28;
                *(undefined8 *)((long)&local_38 + lVar1) = 0x1005cff0f;
                iVar3 = _ExtAudioFileSetProperty(local_8308,0x63666d74,0x28);
                if (iVar3 == -0x80) goto LAB_1005d0387;
                if (iVar3 == 0) {
                  local_82fc = 0x28;
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1005cff4b;
                  iVar3 = _ExtAudioFileSetProperty(local_8318,0x63666d74,0x28,&local_83b8);
                  if (iVar3 == -0x80) goto LAB_1005d0387;
                  if (iVar3 == 0) {
                    do {
                      local_8340[0] = 1;
                      local_8338 = uStack_8374;
                      local_8334 = 0x8000;
                      local_830c = (int)(0x8000 / (ulong)uStack_83a0);
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1005cffc1;
                      local_8330 = &local_82d8;
                      _ExtAudioFileRead(local_8308,&local_830c,local_8340);
                      if (local_830c == 0) {
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d03f5;
                        iVar3 = FUN_10017ecc9(local_8320,local_2d8,param_8,0);
                        goto LAB_1005d0387;
                      }
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1005cffde;
                      iVar3 = _ExtAudioFileWrite(local_8318,local_830c,local_8340);
                    } while (iVar3 == 0);
                    if (iVar3 == -0x80) goto LAB_1005d0387;
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1005cfff3;
                    uVar4 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d0003;
                    cVar2 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar2 == '\0') goto LAB_1005d0387;
                    puVar6 = &local_82f8;
                    local_82f8 = 0x8220202;
                    local_82f4 = "Assertion failure";
                    local_82ec = 0x400;
                    local_82ea = iVar3;
                  }
                  else {
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d032e;
                    uVar4 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d033e;
                    cVar2 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar2 == '\0') goto LAB_1005d0387;
                    puVar6 = &local_82d8;
                    local_82d8 = 0x8220202;
                    local_82d4 = "Assertion failure";
                    local_82cc = 0x400;
                    local_82ca = iVar3;
                  }
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d02dd;
                  uVar4 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d02ed;
                  cVar2 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar2 == '\0') goto LAB_1005d0387;
                  puVar6 = &local_82d8;
                  local_82d8 = 0x8220202;
                  local_82d4 = "Assertion failure";
                  local_82cc = 0x400;
                  local_82ca = iVar3;
                }
              }
              else {
                *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d0289;
                uVar4 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d0299;
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 == '\0') goto LAB_1005d0387;
                puVar6 = &local_82d8;
                local_82d8 = 0x8220202;
                local_82d4 = "Assertion failure";
                local_82cc = 0x400;
                local_82ca = iVar3;
              }
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d0235;
              uVar4 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d0245;
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 == '\0') goto LAB_1005d0387;
              puVar6 = &local_82d8;
              local_82d8 = 0x8220202;
              local_82d4 = "Assertion failure";
              local_82cc = 0x400;
              local_82ca = iVar3;
            }
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d01e1;
            uVar4 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d01f1;
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 == '\0') goto LAB_1005d0387;
            puVar6 = &local_82d8;
            local_82d8 = 0x8220202;
            local_82d4 = "Assertion failure";
            local_82cc = 0x400;
            local_82ca = iVar3;
          }
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d0143;
          uVar4 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d0153;
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 == '\0') goto LAB_1005d0387;
          puVar6 = &local_82d8;
          local_82d8 = 0x8220202;
          local_82d4 = "Assertion failure";
          local_82cc = 0x400;
          local_82ca = iVar3;
        }
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d00ef;
        uVar4 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d00ff;
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 == '\0') goto LAB_1005d0387;
        puVar6 = &local_82d8;
        local_82d8 = 0x8220202;
        local_82d4 = "Assertion failure";
        local_82cc = 0x400;
        local_82ca = iVar3;
      }
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d009b;
      uVar4 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d00ab;
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 == '\0') goto LAB_1005d0387;
      puVar6 = &local_82d8;
      local_82d8 = 0x8220202;
      local_82d4 = "Assertion failure";
      local_82cc = 0x400;
      local_82ca = iVar3;
    }
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d0047;
    uVar4 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d0057;
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 == '\0') goto LAB_1005d0387;
    puVar6 = &local_82d8;
    local_82d8 = 0x8220202;
    local_82d4 = "Assertion failure";
    local_82cc = 0x400;
    local_82ca = iVar3;
  }
  *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d0387;
  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",puVar6,0x12);
LAB_1005d0387:
  if (local_8318 != 0) {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d0398;
    _ExtAudioFileDispose();
  }
  if (local_8308 != 0) {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d03a9;
    _ExtAudioFileDispose();
  }
  if (param_7 != 0) {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1005d03b7;
    FUN_1001e9eb9();
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_38 + lVar1) = &UNK_1005d03ff;
  ___stack_chk_fail();
}

