// name: FUN_1002537af
// address: 1002537af

undefined8
FUN_1002537af(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 *param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  long lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined1 auVar12 [12];
  long local_37c0;
  char local_379c;
  long local_3798;
  uint local_3784;
  undefined1 local_3780 [24];
  undefined1 local_3768 [80];
  undefined1 local_3718 [72];
  undefined1 local_36d0 [72];
  undefined1 local_3688 [16];
  undefined1 local_3678 [1072];
  undefined1 local_3248 [16];
  undefined1 local_3238 [1072];
  undefined1 local_2e08 [16];
  undefined1 local_2df8 [1072];
  int local_29c8 [2];
  undefined4 uStack_29c0;
  char cStack_29bd;
  undefined2 local_29bc;
  undefined2 local_29ba;
  undefined6 uStack_29b8;
  uint local_2978;
  undefined8 local_2974;
  ushort local_296c;
  undefined2 uStack_296a;
  undefined6 uStack_2968;
  undefined1 local_2960 [80];
  undefined1 local_2910 [72];
  undefined1 local_28c8 [72];
  undefined1 local_2880 [16];
  undefined1 local_2870 [1072];
  undefined1 local_2440 [16];
  undefined1 local_2430 [16];
  undefined1 local_2420 [1056];
  undefined1 local_2000 [16];
  undefined1 local_1ff0 [1080];
  int local_1bb8;
  uint uStack_1bb4;
  undefined4 uStack_1bb0;
  undefined2 uStack_1bac;
  undefined2 uStack_1baa;
  char cStack_1ba8;
  undefined1 uStack_1ba7;
  undefined2 uStack_1ba6;
  undefined2 uStack_1ba4;
  int local_1ba0 [18];
  undefined4 local_1b58;
  undefined1 local_1b50 [72];
  undefined1 auStack_1b08 [72];
  undefined1 local_1ac0 [16];
  undefined1 local_1ab0 [16];
  undefined1 local_1aa0 [1056];
  undefined1 auStack_1680 [16];
  undefined1 auStack_1670 [16];
  undefined1 auStack_1660 [1056];
  undefined1 auStack_1240 [16];
  undefined1 auStack_1230 [16];
  undefined1 auStack_1220 [1064];
  int local_df8;
  uint uStack_df4;
  undefined4 uStack_df0;
  undefined2 uStack_dec;
  undefined2 uStack_dea;
  undefined2 uStack_de8;
  undefined2 uStack_de6;
  undefined2 uStack_de4;
  int local_de0 [2];
  undefined4 local_dd8;
  undefined4 uStack_dd4;
  uint local_d98;
  undefined1 local_d90 [72];
  undefined1 local_d48 [72];
  undefined1 local_d00 [16];
  undefined1 local_cf0 [16];
  undefined1 auStack_ce0 [1056];
  undefined1 local_8c0 [16];
  undefined1 local_8b0 [16];
  undefined1 local_8a0 [1056];
  undefined1 local_480 [16];
  undefined1 local_470 [16];
  undefined1 auStack_460 [1056];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1002537c7;
  auVar12 = FUN_100108310();
  lVar4 = -auVar12._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == (undefined8 *)0x0) {
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100253a9b;
    uVar10 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100253aab;
    cVar6 = _os_log_type_enabled(uVar10,0x10);
    if (cVar6 != '\0') {
      local_df8 = 0x8220202;
      uStack_df4 = 0x7a0a90;
      uStack_df0 = 1;
      uStack_dec = 0x822;
      uStack_dea = 0x4895;
      uStack_de8 = 0x7b;
      uStack_de6 = 1;
      uStack_de4 = 0;
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002547d9;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_df8,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100253abc;
    FUN_1001782e9(0,0);
    uVar10 = 0xffffffce;
    goto LAB_100254a7d;
  }
  *param_5 = 0;
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100253810;
  piVar8 = operator_new(0xdb8,(nothrow_t *)PTR_nothrow_10082c970);
  if (piVar8 == (int *)0x0) {
    *param_5 = 0;
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100253ad2;
    uVar10 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100253ae2;
    cVar6 = _os_log_type_enabled(uVar10,0x10);
    if (cVar6 != '\0') {
      local_df8 = 0x8220202;
      uStack_df4 = 0x7a0a90;
      uStack_df0 = 1;
      uStack_dec = 0x822;
      uStack_dea = 0x48b7;
      uStack_de8 = 0x7b;
      uStack_de6 = 1;
      uStack_de4 = 0;
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100254852;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_df8,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100253af3;
    FUN_1001782e9(0,0);
    uVar10 = 0xffffff94;
    goto LAB_100254a7d;
  }
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100253824;
  FUN_10024f4f0(piVar8);
  *param_5 = piVar8;
  piVar2 = piVar8 + 0x14e;
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10025385a;
  iVar7 = FUN_10022460f(2,param_1,param_2);
  if (iVar7 != 0) goto LAB_100253a21;
  if (param_1[6] == 0) {
    if (*(char *)(param_1 + 10) == '\0') goto LAB_1002538b2;
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100253cce;
    iVar7 = FUN_10022460f(1,param_1,param_2,piVar8 + 0x3e,0);
    if (iVar7 != -0x80) {
      if (iVar7 == 0) goto LAB_1002538b2;
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100253ced;
      uVar10 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100253cfd;
      cVar6 = _os_log_type_enabled(uVar10,0x10);
      if (cVar6 != '\0') {
        local_df8 = 0x8220202;
        uStack_df4 = 0x7a0a90;
        uStack_df0 = 1;
        uStack_dec = 0x400;
        uStack_dea = (undefined2)iVar7;
        uStack_de8 = (undefined2)((uint)iVar7 >> 0x10);
        *(undefined8 *)((long)&local_38 + lVar4) = 0x100253d4a;
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_df8,0x12);
      }
    }
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100253887;
    FUN_100249f2c(piVar8 + 0x3e,piVar2);
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10025389a;
    FUN_100249f2c(piVar8 + 0x42,piVar8 + 0x152);
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1002538b2;
    _memcpy(piVar8 + 0x46,piVar8 + 0x156,0x420);
LAB_1002538b2:
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1002538be;
    lVar9 = FUN_100249f90(piVar2);
    if (lVar9 != 0) {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002538da;
      FUN_100249ed4(&local_df8,piVar2);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002538ed;
      FUN_100249ed4(&local_1bb8,piVar8 + 0x25e);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002538fc;
      cVar6 = FUN_10024aa49(param_2,&local_df8);
      if (cVar6 != '\0') {
        piVar8[2] = 1;
        *(byte *)(piVar8 + 3) = *(byte *)(piVar8 + 3) | 4;
      }
      if (local_1bb8 == 0x73766d64) {
        *(undefined8 *)((long)&local_38 + lVar4) = 0x100253926;
        cVar6 = FUN_100168311(CONCAT26(uStack_1baa,CONCAT24(uStack_1bac,uStack_1bb0)));
        if (cVar6 != '\0') goto LAB_100253930;
LAB_100253940:
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10025394f;
        cVar6 = FUN_10024abfd(param_2,&local_1bb8);
        if (cVar6 != '\0') {
          *(byte *)(piVar8 + 3) = *(byte *)(piVar8 + 3) | 2;
        }
      }
      else {
LAB_100253930:
        if ((local_1bb8 == 0x73766970) && (uStack_1bb0._3_1_ != '\0')) goto LAB_100253940;
      }
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100253967;
      cVar6 = FUN_10024ab23(param_2,&local_df8);
      if (cVar6 == '\0') {
        if (local_1bb8 == 0x73766d64) {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100253984;
          cVar6 = FUN_100168311(CONCAT26(uStack_1baa,CONCAT24(uStack_1bac,uStack_1bb0)));
          if (cVar6 != '\0') goto LAB_10025398e;
LAB_10025399e:
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1002539ad;
          cVar6 = FUN_10024ab23(param_2,&local_1bb8);
          if (cVar6 != '\0') goto LAB_1002539b1;
        }
        else {
LAB_10025398e:
          if ((local_1bb8 == 0x73766970) && (uStack_1bb0._3_1_ != '\0')) goto LAB_10025399e;
        }
      }
      else {
LAB_1002539b1:
        *(byte *)(piVar8 + 3) = *(byte *)(piVar8 + 3) | 1;
      }
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002539c2;
      FUN_100249fca(&local_1bb8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002539ce;
      FUN_100249fca(&local_df8);
    }
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1002539dd;
    lVar9 = FUN_100249f90(piVar8 + 0x3e);
    if (lVar9 != 0) {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002539f1;
      FUN_100249ed4(&local_df8,piVar8 + 0x3e);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100253a07;
      cVar6 = FUN_10024aa49(param_2,&local_df8);
      if (cVar6 != '\0') {
        *piVar8 = 1;
        *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 4;
      }
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100253a21;
      FUN_100249fca(&local_df8);
    }
  }
LAB_100253a21:
  local_379c = auVar12[8];
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100253a3e;
  FUN_100254cee(piVar8,param_1,auVar12._8_4_ & 0xff);
  local_2978 = 1;
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100253a54;
  FUN_10024f22a(&local_df8);
  if (((param_1[8] == 0) && (param_1[9] == 0)) && (*(char *)(param_1 + 10) == '\0')) {
    local_3798 = 0;
LAB_100253b67:
    do {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100253b80;
      FUN_10024f22a(&local_1bb8);
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar4) = 0;
      *(undefined8 *)(&stack0xffffffffffffffd8 + lVar4) = 0;
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100253ba8;
      cVar6 = FUN_100254eae(param_4,2,param_1,param_2,local_2978,&local_1bb8);
      if (cVar6 != '\0') {
        *(undefined8 *)((long)&local_38 + lVar4) = 0x100253bb7;
        cVar6 = FUN_10024ab23(&local_1bb8,&local_df8);
        if (cVar6 != '\0') {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100253bc6;
          FUN_10024adb0(&local_df8,&local_1bb8);
        }
      }
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100253bce;
      lVar9 = FUN_100249f90(param_2);
      local_2978 = local_2978 - 1;
      if (lVar9 == 0) {
        local_2978 = 0;
      }
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100253beb;
      FUN_10024f3ba(&local_1bb8);
    } while (2 < local_2978);
    if (local_df8 == 0x73766d64) {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100253c1b;
      cVar6 = FUN_100168311(CONCAT26(uStack_dea,CONCAT24(uStack_dec,uStack_df0)));
      if (cVar6 != '\0') goto LAB_100253c25;
    }
    else {
LAB_100253c25:
      bVar5 = false;
      if ((local_df8 != 0x73766970) || (bVar5 = false, uStack_df0._3_1_ == '\0'))
      goto LAB_100253daf;
    }
    bVar5 = true;
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100253c54;
    FUN_10024adb0(piVar8 + 0x2c,&local_df8);
  }
  else if (param_4 == 0) {
    uVar3 = *param_1;
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100253b20;
    local_3798 = FUN_1005f4b1c(uVar3);
    if (local_3798 != 0) goto LAB_100253b35;
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100253d7e;
    uVar10 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100253d8e;
    cVar6 = _os_log_type_enabled(uVar10,0x10);
    if (cVar6 != '\0') {
      local_1bb8 = 0x8220202;
      uStack_1bb4 = 0x7a0a90;
      uStack_1bb0 = 1;
      uStack_1bac = 0x822;
      uStack_1baa = 0x3c43;
      cStack_1ba8 = '{';
      uStack_1ba7 = 0;
      uStack_1ba6 = 1;
      uStack_1ba4 = 0;
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100254b40;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_1bb8,0x16);
    }
    bVar5 = false;
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100253da4;
    FUN_1001782e9(1,0);
    local_3798 = 0;
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100253b0e;
    local_3798 = FUN_1001705fc();
LAB_100253b35:
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100253b4a;
    lVar9 = FUN_10024e6d3(local_3798,0,&local_2978);
    if (lVar9 == 0) {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100253c5e;
      uVar10 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100253c6e;
      cVar6 = _os_log_type_enabled(uVar10,0x10);
      if (cVar6 != '\0') {
        pcVar11 = 
        "GetMobileDeviceDictionariesForSupportedPayloadVersion(webUpdateDictionary, kUseCurrentSupportedPayloadVersion, nullptr, &supportedPayloadVersion) != nullptr"
        ;
LAB_100254aca:
        uStack_1bac = 0x822;
        uStack_1bb0 = 1;
        uStack_1bb4 = 0x7a0a90;
        local_1bb8 = 0x8220202;
        uStack_1baa = SUB82(pcVar11,0);
        cStack_1ba8 = (char)((ulong)pcVar11 >> 0x10);
        uStack_1ba7 = 0;
        uStack_1ba6 = (undefined2)((ulong)pcVar11 >> 0x20);
        uStack_1ba4 = 0;
        *(undefined8 *)((long)&local_38 + lVar4) = 0x100254aef;
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_1bb8,0x16);
      }
    }
    else {
      if (local_2978 != 0) goto LAB_100253b67;
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100253d54;
      uVar10 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100253d64;
      cVar6 = _os_log_type_enabled(uVar10,0x10);
      if (cVar6 != '\0') {
        pcVar11 = "supportedPayloadVersion > 0";
        goto LAB_100254aca;
      }
    }
    bVar5 = false;
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100253d77;
    FUN_1001782e9(0,0);
  }
LAB_100253daf:
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100253dbb;
  FUN_10017060f(local_3798);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100253dc7;
  FUN_10024f3ba(&local_df8);
  uVar10 = 0;
  if (!bVar5) goto LAB_100254a7d;
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100253de0;
  FUN_10025b0de(local_3780,piVar8);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100253deb;
  FUN_100254d38(piVar8,param_2);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100253dfd;
  FUN_100254cee(piVar8,param_1,auVar12._8_4_ & 0xff);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100253e0c;
  FUN_10024f4f0();
  local_3784 = 1;
  if (((param_1[8] == 0) && (param_1[9] == 0)) && (*(char *)(param_1 + 10) == '\0')) {
    local_37c0 = 0;
LAB_100253e94:
    do {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100254011;
      FUN_10025b0de(&local_1bb8,piVar8);
      *(undefined1 **)(&stack0xffffffffffffffd8 + lVar4) = &uStack_1ba7;
      *(char **)(&stack0xffffffffffffffd0 + lVar4) = &cStack_1ba8;
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100254049;
      cVar6 = FUN_100254eae(param_4,1,param_1,param_2,local_3784,local_1ba0);
      if (cVar6 != '\0') {
        if (cStack_1ba8 == '\x01') {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100254071;
          FUN_10025b0de(&local_2978,local_3780);
          *(undefined8 *)(&stack0xffffffffffffffd0 + lVar4) = 0;
          *(undefined8 *)(&stack0xffffffffffffffd8 + lVar4) = 0;
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10025409d;
          cVar6 = FUN_100254eae(param_4,2,param_1,param_2,local_3784,local_28c8);
          if (cVar6 == '\0') {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002541ca;
            uVar10 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002541da;
            cVar6 = _os_log_type_enabled(uVar10,0x10);
            if (cVar6 != '\0') {
              local_29c8[0] = 0x8220202;
              local_29c8[1] = 0x7a0a90;
              uStack_29c0 = 1;
              local_29bc = 0x822;
              local_29ba = 0x16bc;
              uStack_29b8 = 0x1007a;
              *(undefined8 *)((long)&local_38 + lVar4) = 0x1002545e8;
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",local_29c8,0x16
                                 );
            }
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002541eb;
            FUN_1001782e9(0,0);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002541fa;
            FUN_10024f22a(local_29c8);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100254205;
            FUN_10024adb0(local_1ba0,local_29c8);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10025420d;
            FUN_10024f3ba(local_29c8);
            cStack_1ba8 = '\0';
            uStack_1ba7 = 0;
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002540b4;
            FUN_100254d38(&local_2978,param_2);
            local_1bb8 = local_2974._4_4_;
            if (((param_1[8] == 0) && (param_1[9] == 0)) && (*(char *)(param_1 + 10) == '\0')) {
              uStack_1bb4 = CONCAT22(uStack_296a,local_296c);
            }
            else {
              if (local_2974._4_4_ == 1) {
                local_2974 = (char *)CONCAT44(3,(undefined4)local_2974);
                local_1bb8 = 3;
                if (local_379c != '\0') {
LAB_100254243:
                  uStack_1bb4 = local_296c & 8;
                  local_296c = (ushort)uStack_1bb4;
                  uStack_296a = 0;
                  goto LAB_100254274;
                }
              }
              else {
                if (local_379c != '\0') goto LAB_100254243;
                if (local_2974._4_4_ == 2) {
                  local_2974 = (char *)CONCAT44(3,(undefined4)local_2974);
                  local_1bb8 = 3;
                }
              }
              local_296c = 0;
              uStack_296a = 0;
              uStack_1bb4 = 0;
            }
LAB_100254274:
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10025428f;
            FUN_100249f2c(local_1ac0,local_2440);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002542a2;
            FUN_100249f2c(local_1ab0,local_2430);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002542ba;
            _memcpy(local_1aa0,local_2420,0x420);
          }
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1002542c6;
          FUN_100249fee(local_1ff0);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1002542d2;
          FUN_100249fca(local_2000);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1002542de;
          FUN_100249fee(local_2430);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1002542ea;
          FUN_100249fca(local_2440);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1002542f6;
          FUN_100249fee(local_2870);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100254302;
          FUN_100249fca(local_2880);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10025430e;
          FUN_10024f3ba(local_28c8);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10025431a;
          FUN_10024f3ba(local_2910);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100254326;
          FUN_10024f3ba(local_2960);
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1002540f5;
          FUN_100249ed4(&local_2978,local_1ba0);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100254104;
          FUN_100249ed4(local_29c8,local_1ac0);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100254113;
          cVar6 = FUN_10024aa49(param_2,&local_2978);
          if (cVar6 != '\0') {
            if (local_1bb8 != 0) {
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100254133;
              cVar6 = FUN_10024aa49(local_29c8,&local_2978);
              if (cVar6 == '\0') goto LAB_100254141;
            }
            local_1bb8 = 3;
          }
LAB_100254141:
          if (local_29c8[0] == 0x73766d64) {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10025415a;
            cVar6 = FUN_100168311(CONCAT26(local_29ba,CONCAT24(local_29bc,uStack_29c0)));
            if (cVar6 != '\0') goto LAB_100254164;
LAB_100254174:
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100254187;
            cVar6 = FUN_10024abfd(local_29c8,&local_2978);
            if (cVar6 != '\0') {
              if (local_1bb8 != 0) {
                local_1bb8 = 2;
              }
              uStack_1bb4 = 8;
            }
          }
          else {
LAB_100254164:
            if ((local_29c8[0] == 0x73766970) && (cStack_29bd != '\0')) goto LAB_100254174;
          }
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1002541b4;
          FUN_100249fca(local_29c8);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1002541c0;
          FUN_100249fca(&local_2978);
        }
        if ((local_de0[0] == 0x73766d64 && local_1ba0[0] == 0x73766970) ||
           (local_de0[0] == 0x73766970 && local_1ba0[0] == 0x73766d64)) {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100254498;
          uVar10 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1002544a8;
          cVar6 = _os_log_type_enabled(uVar10,0x10);
          if (cVar6 != '\0') {
            local_2978 = 0x8220202;
            local_2974 = "Assertion failure";
            local_296c = 0x822;
            uStack_296a = 0x38d8;
            uStack_2968 = 0x1007b;
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10025458c;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_2978,0x16)
            ;
          }
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1002544b9;
          FUN_1001782e9(0,0);
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10025436c;
          iVar7 = FUN_10024a7e6(local_1ba0,local_de0);
          if (-1 < iVar7) {
            uStack_de8 = CONCAT11(uStack_1ba7,cStack_1ba8);
            uStack_de6 = uStack_1ba6;
            local_df8 = local_1bb8;
            uStack_df4 = uStack_1bb4;
            uStack_df0 = uStack_1bb0;
            uStack_dec = uStack_1bac;
            uStack_dea = uStack_1baa;
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10025439d;
            FUN_10024adb0(local_de0,local_1ba0);
            local_d98 = local_1b58;
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002543bc;
            FUN_10024adb0(local_d90,local_1b50);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002543cf;
            FUN_10024adb0(local_d48,auStack_1b08);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002543de;
            FUN_100249f2c(local_d00,local_1ac0);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002543f1;
            FUN_100249f2c(local_cf0,local_1ab0);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100254409;
            _memcpy(auStack_ce0,local_1aa0,0x420);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10025441c;
            FUN_100249f2c(local_8c0,auStack_1680);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10025442f;
            FUN_100249f2c(local_8b0,auStack_1670);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100254447;
            _memcpy(local_8a0,auStack_1660,0x420);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10025445a;
            FUN_100249f2c(local_480,auStack_1240);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10025446d;
            FUN_100249f2c(local_470,auStack_1230);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100254485;
            _memcpy(auStack_460,auStack_1220,0x420);
            local_d98 = local_3784;
          }
        }
      }
      local_3784 = local_3784 - 1;
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002544cb;
      FUN_100249fee(auStack_1230);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002544d7;
      FUN_100249fca(auStack_1240);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002544e3;
      FUN_100249fee(auStack_1670);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002544ef;
      FUN_100249fca(auStack_1680);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002544fb;
      FUN_100249fee(local_1ab0);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100254503;
      FUN_100249fca(local_1ac0);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10025450f;
      FUN_10024f3ba(auStack_1b08);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10025451b;
      FUN_10024f3ba(local_1b50);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100254523;
      FUN_10024f3ba(local_1ba0);
    } while (2 < local_3784);
    if (local_de0[0] == 0x73766d64) {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100254614;
      cVar6 = FUN_100168311(CONCAT44(uStack_dd4,local_dd8));
      if (cVar6 != '\0') goto LAB_10025461e;
    }
    else {
LAB_10025461e:
      if ((local_de0[0] != 0x73766970) || (local_dd8._3_1_ == '\0')) goto LAB_100254880;
    }
    piVar8[4] = CONCAT22(uStack_de6,uStack_de8);
    *piVar8 = local_df8;
    piVar8[1] = uStack_df4;
    piVar8[2] = uStack_df0;
    piVar8[3] = CONCAT22(uStack_dea,uStack_dec);
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100254659;
    FUN_10024adb0(piVar8 + 6,local_de0);
    piVar8[0x18] = local_d98;
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100254672;
    FUN_10024adb0(piVar8 + 0x1a,local_d90);
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100254685;
    FUN_10024adb0(piVar8 + 0x2c,local_d48);
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100254698;
    FUN_100249f2c(piVar8 + 0x3e,local_d00);
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1002546ab;
    FUN_100249f2c(piVar8 + 0x42,local_cf0);
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1002546c3;
    _memcpy(piVar8 + 0x46,auStack_ce0,0x420);
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1002546d6;
    FUN_100249f2c(piVar2,local_8c0);
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1002546e9;
    FUN_100249f2c(piVar8 + 0x152,local_8b0);
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100254701;
    _memcpy(piVar8 + 0x156,local_8a0,0x420);
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100254714;
    FUN_100249f2c(piVar8 + 0x25e,local_480);
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100254727;
    FUN_100249f2c(piVar8 + 0x262,local_470);
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10025473f;
    _memcpy(piVar8 + 0x266,auStack_460,0x420);
  }
  else if (param_4 == 0) {
    uVar3 = *param_1;
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100253e57;
    local_37c0 = FUN_1005f4b1c(uVar3);
    if (local_37c0 != 0) goto LAB_100253e63;
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10025485c;
    uVar10 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10025486c;
    cVar6 = _os_log_type_enabled(uVar10,0x10);
    if (cVar6 != '\0') {
      local_1bb8 = 0x8220202;
      uStack_1bb4 = 0x7a0a90;
      uStack_1bb0 = 1;
      uStack_1bac = 0x822;
      uStack_1baa = 0x3c43;
      cStack_1ba8 = '{';
      uStack_1ba7 = 0;
      uStack_1ba6 = 1;
      uStack_1ba4 = 0;
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100254be2;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_1bb8,0x16);
    }
    local_37c0 = 0;
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100254880;
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100253e49;
    local_37c0 = FUN_1001705fc();
LAB_100253e63:
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100253e77;
    lVar9 = FUN_10024e6d3(local_37c0,0xffffffff,&local_3784);
    if (lVar9 == 0) {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100254749;
      uVar10 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100254759;
      cVar6 = _os_log_type_enabled(uVar10,0x10);
      if (cVar6 != '\0') {
        pcVar11 = 
        "GetMobileDeviceDictionariesForSupportedPayloadVersion(webUpdateDictionary, kUseLatestSupportedPayloadVersion, nullptr, &supportedPayloadVersion) != nullptr"
        ;
LAB_100254b6c:
        uStack_1bac = 0x822;
        uStack_1bb0 = 1;
        uStack_1bb4 = 0x7a0a90;
        local_1bb8 = 0x8220202;
        uStack_1baa = SUB82(pcVar11,0);
        cStack_1ba8 = (char)((ulong)pcVar11 >> 0x10);
        uStack_1ba7 = 0;
        uStack_1ba6 = (undefined2)((ulong)pcVar11 >> 0x20);
        uStack_1ba4 = 0;
        *(undefined8 *)((long)&local_38 + lVar4) = 0x100254b91;
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_1bb8,0x16);
      }
    }
    else {
      if (local_3784 != 0) goto LAB_100253e94;
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002547e3;
      uVar10 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002547f3;
      cVar6 = _os_log_type_enabled(uVar10,0x10);
      if (cVar6 != '\0') {
        pcVar11 = "supportedPayloadVersion > 0";
        goto LAB_100254b6c;
      }
    }
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100254804;
    FUN_1001782e9(0,0);
  }
LAB_100254880:
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100254888;
  FUN_10017060f(local_37c0);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10025489b;
  FUN_100249fee(local_470);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x1002548a3;
  FUN_100249fca(local_480);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x1002548b6;
  FUN_100249fee(local_8b0);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x1002548be;
  FUN_100249fca(local_8c0);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x1002548d1;
  FUN_100249fee(local_cf0);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x1002548d9;
  FUN_100249fca(local_d00);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x1002548e5;
  FUN_10024f3ba(local_d48);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x1002548f1;
  FUN_10024f3ba(local_d90);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x1002548fd;
  FUN_10024f3ba(local_de0);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100254902;
  lVar9 = FUN_100279b99();
  if (*(char *)(lVar9 + 1) == '\0') {
    piVar1 = piVar8 + 0x1a;
    *(undefined1 **)(&stack0xffffffffffffffd8 + lVar4) = (undefined1 *)((long)piVar8 + 0x13);
    *(undefined1 **)(&stack0xffffffffffffffd0 + lVar4) = (undefined1 *)((long)piVar8 + 0x12);
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100254948;
    cVar6 = FUN_100254eae(param_4,3,param_1,param_2,0xffffffff,piVar1);
    if (cVar6 != '\0') {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100254958;
      lVar9 = FUN_100249f90(piVar1);
      if (lVar9 == 0) {
        *(undefined8 *)((long)&local_38 + lVar4) = 0x100254970;
        cVar6 = FUN_10024abfd(piVar1,piVar8 + 6);
        if (cVar6 == '\0') {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10025498a;
          lVar9 = FUN_100249f90(piVar8 + 0x3e);
          if (lVar9 != 0) {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10025499a;
            cVar6 = FUN_10024abfd(piVar8 + 0x3e,piVar1);
            if (cVar6 != '\0') goto LAB_1002549d6;
          }
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1002549aa;
          lVar9 = FUN_100249f90(piVar2);
          if (lVar9 != 0) {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002549be;
            cVar6 = FUN_10024abfd(piVar2,piVar1);
            if (cVar6 != '\0') goto LAB_1002549d6;
          }
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1002549d2;
          cVar6 = FUN_1002556b0(piVar8 + 0x1e);
          if (cVar6 == '\0') goto LAB_100254a06;
        }
      }
LAB_1002549d6:
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002549e2;
      FUN_10024f22a(&local_df8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002549f1;
      FUN_10024adb0(piVar1,&local_df8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002549fd;
      FUN_10024f3ba(&local_df8);
      *(undefined1 *)((long)piVar8 + 0x12) = 0;
      *(undefined1 *)((long)piVar8 + 0x13) = 0;
    }
  }
LAB_100254a06:
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100254a19;
  FUN_100249fee(local_2df8);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100254a21;
  FUN_100249fca(local_2e08);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100254a34;
  FUN_100249fee(local_3238);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100254a3c;
  FUN_100249fca(local_3248);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100254a4f;
  FUN_100249fee(local_3678);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100254a57;
  FUN_100249fca(local_3688);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100254a63;
  FUN_10024f3ba(local_36d0);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100254a6f;
  FUN_10024f3ba(local_3718);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100254a7b;
  FUN_10024f3ba(local_3768);
  uVar10 = 0;
LAB_100254a7d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_38 + lVar4) = &UNK_100254bec;
    ___stack_chk_fail();
  }
  return uVar10;
}

