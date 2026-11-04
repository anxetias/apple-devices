// name: FUN_100340e42
// address: 100340e42

void FUN_100340e42(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  ulong *puVar3;
  ulong *puVar4;
  long *plVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  char *pcVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  char *pcVar22;
  uint *puVar23;
  long lVar24;
  ulong uVar25;
  undefined4 *puVar26;
  undefined4 uVar27;
  bool bVar28;
  uint local_1574;
  long *local_1570;
  long local_1568;
  int local_155c;
  undefined8 local_1558;
  uint local_1550;
  undefined4 uStack_154c;
  long *local_1548;
  ulong local_1540;
  char *local_1538;
  ulong local_1530;
  ulong *local_1528;
  long local_1520;
  undefined4 local_1518;
  uint uStack_1514;
  undefined4 uStack_1510;
  undefined2 local_150c;
  char *local_150a;
  undefined2 local_1502;
  int local_1500;
  undefined2 uStack_14fc;
  undefined2 uStack_14fa;
  undefined2 uStack_14f8;
  undefined4 uStack_14f6;
  undefined4 uStack_14f2;
  undefined2 local_14ee;
  ulong local_14ec;
  undefined2 local_14e4;
  long local_14e2;
  undefined2 local_14da;
  ulong local_14d8;
  undefined4 local_10c8;
  undefined8 local_10c4;
  undefined4 local_10b8;
  ulong *local_10b4;
  undefined2 local_10ac;
  ulong *local_10aa;
  undefined2 local_10a2;
  int local_10a0;
  undefined1 local_1098 [512];
  short local_e98 [16];
  byte local_e78 [512];
  uint local_c78 [128];
  uint local_a78 [264];
  undefined4 local_658;
  char *local_654;
  undefined2 local_64c;
  char *local_64a;
  undefined2 local_642;
  undefined8 local_640;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100340e5a;
  lVar12 = FUN_100108310();
  lVar12 = -lVar12;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
LAB_1003440d2:
    *(undefined8 *)((long)&local_38 + lVar12) = 0x1003440d7;
    uVar13 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar12) = 0x1003440e7;
    cVar6 = _os_log_type_enabled(uVar13,0x10);
    if (cVar6 != '\0') {
      local_1518 = 0x8220202;
      uStack_1514 = 0x7a0a90;
      uStack_1510 = 1;
      local_150c = 0x822;
      local_150a = "DulcimerHandlerDataIsValid(handlerData)";
      *(undefined8 *)((long)&local_38 + lVar12) = 0x100344222;
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_1518,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar12) = 0x1003440f8;
    FUN_1001782e9(0,0);
  }
  else {
    local_1520 = param_2;
    if (*(int *)(param_2 + 8) != 0x64756c63) {
      *(undefined8 *)((long)&local_38 + lVar12) = 0x100340e8a;
      uVar13 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar12) = 0x100340e9a;
      cVar6 = _os_log_type_enabled(uVar13,0x10);
      if (cVar6 != '\0') {
        local_1518 = 0x8220202;
        uStack_1514 = 0x7ab58c;
        uStack_1510 = 1;
        local_150c = 0x822;
        local_150a = "handlerData->magic == kDulcimerHandlerDataMagic";
        *(undefined8 *)((long)&local_38 + lVar12) = 0x100344273;
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_1518,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar12) = 0x100340eae;
      cVar6 = FUN_1001782e9(0,1);
      if (cVar6 == '\0') goto LAB_1003440d2;
    }
    uVar13 = *(undefined8 *)(local_1520 + 0x167e8);
    *(undefined8 *)((long)&local_38 + lVar12) = 0x100340ec9;
    lVar14 = FUN_10017076e(uVar13);
    lVar15 = local_1520;
    if (0 < lVar14) {
      puVar1 = (undefined8 *)(local_1520 + 0x167e8);
      do {
        if ((*(char *)(local_1520 + 0x16849) != '\0') ||
           ((*(long *)(local_1520 + 0x30) != 0 &&
            ((*(byte *)(*(long *)(local_1520 + 0x30) + 0x2be0) & 0x40) != 0)))) {
          uVar13 = *(undefined8 *)(local_1520 + 0x167e8);
          *(undefined8 *)((long)&local_38 + lVar12) = 0x100344109;
          FUN_100170c94(uVar13);
          if (DAT_1008c75c0 != -1) {
            *(undefined8 *)((long)&local_38 + lVar12) = 0x10034428b;
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          lVar15 = local_1520;
          uVar25 = DAT_1008c75b8;
          *(undefined8 *)((long)&local_38 + lVar12) = 0x100344132;
          cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar6 != '\0') {
            local_1518 = 0x8420102;
            uStack_1514 = (uint)*(undefined8 *)(lVar15 + 0x152c8);
            uStack_1510 = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x152c8) >> 0x20);
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100344170;
            __os_log_impl(0x100000000,uVar25,1,
                          "airtraffic> aborted asset copy fiber for device %{public}@",&local_1518,
                          0xc);
          }
          break;
        }
        uVar13 = *(undefined8 *)(local_1520 + 0x167e8);
        *(undefined8 *)((long)&local_38 + lVar12) = 0x100340f18;
        uVar13 = FUN_10016499b(uVar13,0);
        *(undefined8 *)((long)&local_38 + lVar12) = 0x100340f20;
        lVar15 = FUN_1001705fc(uVar13);
        uVar13 = *puVar1;
        *(undefined8 *)((long)&local_38 + lVar12) = 0x100340f34;
        FUN_100170bed(uVar13,0);
        if (lVar15 == 0) {
          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003412a3;
          uVar13 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003412b3;
          cVar6 = _os_log_type_enabled(uVar13);
          if (cVar6 != '\0') {
            local_1518 = 0x8220202;
            uStack_1514 = 0x7a0a90;
            uStack_1510 = 1;
            local_150c = 0x822;
            local_150a = "assetInfoDict != nullptr";
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341a68;
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_1518,0x16)
            ;
          }
          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003412c4;
          FUN_1001782e9(0);
          goto LAB_100342b16;
        }
        *(undefined8 *)((long)&local_38 + lVar12) = 0x100340f4c;
        local_1558 = FUN_100166c1b(lVar15,&cf_Dataclass);
        *(undefined8 *)((long)&local_38 + lVar12) = 0x100340f62;
        local_1538 = (char *)FUN_100166c1b(lVar15,&cf_AssetID);
        *(undefined8 *)((long)&local_38 + lVar12) = 0x100340f78;
        uVar13 = FUN_100166c1b(lVar15,&cf_AssetType);
        *(undefined8 *)((long)&local_38 + lVar12) = 0x100340f8a;
        lVar14 = FUN_100166b7f(lVar15,&cf_Variant);
        local_155c = 0;
        if (lVar14 == 0) {
LAB_10034108b:
          if (DAT_1008c75c0 != -1) {
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100342cb7;
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar25 = DAT_1008c75b8;
          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003410ad;
          cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar6 != '\0') {
            local_1518 = 0x8420202;
            uStack_1514 = (uint)local_1558;
            uStack_1510 = (undefined4)((ulong)local_1558 >> 0x20);
            local_150c = 0x842;
            local_150a = local_1538;
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341108;
            __os_log_impl(0x100000000,uVar25,1,
                          "airtraffic> processing asset manifest for dataclass %{public}@, identifier \"%{public}@\""
                          ,&local_1518,0x16);
          }
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar12) = 0x100340fb3;
          cVar6 = FUN_100167740(lVar14,&cf_AssetParts,&local_155c);
          if (cVar6 == '\0') goto LAB_10034108b;
          if (DAT_1008c75c0 != -1) {
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100342e10;
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar25 = DAT_1008c75b8;
          *(undefined8 *)((long)&local_38 + lVar12) = 0x100340fdd;
          cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
          iVar7 = local_155c;
          if (cVar6 != '\0') {
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100340ffb;
            FUN_10034431c(&local_658,local_155c);
            *(undefined8 *)((long)&local_38 + lVar12) = 0x10034100a;
            uVar16 = FUN_1001b83ae(&local_658);
            local_1518 = 0x8420402;
            uStack_1514 = (uint)local_1558;
            uStack_1510 = (undefined4)((ulong)local_1558 >> 0x20);
            local_150c = 0x842;
            local_150a = local_1538;
            local_1502 = 0x400;
            local_1500 = iVar7;
            uStack_14fc = 0x822;
            uStack_14fa = (undefined2)uVar16;
            uStack_14f8 = (undefined2)((ulong)uVar16 >> 0x10);
            uStack_14f6 = (undefined4)((ulong)uVar16 >> 0x20);
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341081;
            __os_log_impl(0x100000000,uVar25,1,
                          "airtraffic> processing asset manifest for dataclass %{public}@, identifier \"%{public}@\", asset parts 0x%X (%{public}s)"
                          ,&local_1518,0x26);
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341089;
            FUN_1001b7a50(&local_658);
          }
        }
        *(undefined8 *)((long)&local_38 + lVar12) = 0x10034112c;
        cVar6 = FUN_100340841(local_1558,local_1538,uVar13,&local_1574,&local_1550);
        if (cVar6 == '\0') {
          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003412ce;
          uVar13 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003412de;
          cVar6 = _os_log_type_enabled(uVar13);
          if (cVar6 != '\0') {
            local_1518 = 0x8220202;
            uStack_1514 = 0x7a0a90;
            uStack_1510 = 1;
            local_150c = 0x822;
            local_150a = 
            "GetAirTrafficAssetClassAndIDForIdentifier( dataclass, assetIdentifier, assetType, assetClass, assetID )"
            ;
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341ac4;
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_1518,0x16)
            ;
          }
          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003412ef;
          FUN_1001782e9(0);
          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003412f7;
          FUN_10017060f(lVar15);
          goto LAB_100342b16;
        }
        *(undefined8 *)((long)&local_38 + lVar12) = 0x100341145;
        cVar6 = FUN_100167dd2(lVar15,&cf_IsDownload,0);
        uVar27 = uStack_154c;
        uVar11 = local_1550;
        uVar9 = local_1574;
        if (cVar6 == '\0') {
          if (local_1574 < 9) {
            if ((0x1d8U >> (local_1574 & 0x1f) & 1) == 0) {
              if (local_1574 == 1) {
                if (DAT_1008c75c0 != -1) {
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100343656;
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar25 = DAT_1008c75b8;
                *(undefined8 *)((long)&local_38 + lVar12) = 0x100341b47;
                cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
                uVar27 = 0xf;
                if (cVar6 != '\0') {
                  uStack_1514 = 1;
                  pcVar22 = "airtraffic> unsupported asset class %u";
                  uVar27 = 0xf;
                  goto LAB_100341368;
                }
              }
              else {
                if (local_1574 != 2) goto LAB_100341ac9;
                puVar4 = (ulong *)CONCAT44(uStack_154c,local_1550);
                *(undefined8 *)((long)&local_38 + lVar12) = 0x1003413d7;
                lVar14 = FUN_100166c1b(lVar15,&cf_AssetID);
                if (lVar14 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100341e80;
                  uVar13 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100341e90;
                  cVar6 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar6 != '\0') {
                    local_10b8 = 0x8220202;
                    local_10b4 = (ulong *)0x1007a0a90;
                    local_10ac = 0x822;
                    local_10aa = (ulong *)0x1007c03e2;
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100342951;
                    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                        &local_10b8,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100341ea1;
                  FUN_1001782e9(0,0);
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x1003413f2;
                  local_1528 = (ulong *)FUN_100166c1b(lVar15,&cf_Dataclass);
                  if (local_1528 != (ulong *)0x0) {
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10034141e;
                    iVar7 = FUN_100337125(local_1520,local_1528,0,&local_1518);
                    if (iVar7 == -0x80) {
LAB_10034227a:
                      if (DAT_1008c75c0 != -1) {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x1003438ec;
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      uVar25 = DAT_1008c75b8;
                      uVar27 = 0x10;
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x1003422a2;
                      cVar6 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                      if (cVar6 == '\0') goto LAB_10034137a;
                      local_10b8 = 0x8420102;
                      local_10b4 = local_1528;
                      uVar13 = 0x10;
                      pcVar22 = "airtraffic> could not find Airlock folder for %{public}@ dataclass"
                      ;
                    }
                    else {
                      if (iVar7 != 0) {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100342262;
                        uVar13 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100342272;
                        cVar6 = _os_log_type_enabled(uVar13,0x10);
                        if (cVar6 != '\0') {
                          local_10b8 = 0x8220202;
                          local_10b4 = (ulong *)0x1007a0a90;
                          local_10ac = 0x400;
                          local_10aa = (ulong *)CONCAT44(local_10aa._4_4_,iVar7);
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100342e65;
                          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",
                                              &local_10b8,0x12);
                        }
                        goto LAB_10034227a;
                      }
                      uVar27 = *(undefined4 *)(local_1520 + 8);
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10034144c;
                      iVar7 = FUN_1003376b5(uVar27,lVar14,&local_238);
                      uVar27 = 0x10;
                      if (iVar7 == -0x80) goto LAB_10034137a;
                      if (iVar7 != 0) {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x1003426c1;
                        uVar13 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x1003426d1;
                        cVar6 = _os_log_type_enabled(uVar13,0x10);
                        if (cVar6 != '\0') {
                          local_10aa = (ulong *)CONCAT44(local_10aa._4_4_,iVar7);
                          goto LAB_100342717;
                        }
                        goto LAB_10034137a;
                      }
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100341483;
                      iVar7 = FUN_10017ecc9(&local_1518,&local_238,&local_658,0);
                      if (iVar7 == -0x80) {
LAB_100342b5b:
                        if (DAT_1008c75c0 != -1) {
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100343c9d;
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar25 = DAT_1008c75b8;
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100342b7d;
                        cVar6 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                        if (cVar6 != '\0') {
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100342b98;
                          FUN_1001b8dfc(&local_10c8,&local_238);
                          puVar26 = &local_10c8;
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100342ba7;
                          local_10b4 = (ulong *)FUN_1001b83ae(puVar26);
                          local_10b8 = 0x8220302;
                          local_10ac = 0x842;
                          local_10aa = local_1528;
                          local_10a2 = 0x400;
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100342c07;
                          local_10a0 = iVar7;
                          __os_log_impl(0x100000000,uVar25,0x10,
                                        "airtraffic> could not find file \"%{public}s\" in Airlock/%{public}@ folder (%d)"
                                        ,&local_10b8,0x1c);
LAB_100342c0a:
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100342c0f;
                          FUN_1001b7a50(puVar26);
                        }
                        goto LAB_10034137a;
                      }
                      if (iVar7 != 0) {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100342b43;
                        uVar13 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100342b53;
                        cVar6 = _os_log_type_enabled(uVar13,0x10);
                        if (cVar6 != '\0') {
                          local_10b8 = 0x8220202;
                          local_10b4 = (ulong *)0x1007a0a90;
                          local_10ac = 0x400;
                          local_10aa = (ulong *)CONCAT44(local_10aa._4_4_,iVar7);
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003435f6;
                          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",
                                              &local_10b8,0x12);
                        }
                        goto LAB_100342b5b;
                      }
                      uVar13 = *(undefined8 *)(local_1520 + 0x30);
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x1003414ab;
                      lVar14 = FUN_100300729(uVar13,puVar4);
                      if (lVar14 != 0) {
                        puVar3 = *(ulong **)(lVar14 + 0x58);
                        if (((puVar3 == (ulong *)0x0) || (puVar3[1] == 0)) ||
                           (*(long *)(puVar3[1] + 0x10) == 0)) {
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100342e6f;
                          uVar13 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100342e7f;
                          cVar6 = _os_log_type_enabled(uVar13,0x10);
                          if (cVar6 != '\0') {
                            local_10b8 = 0x8220202;
                            local_10b4 = (ulong *)0x1007a0a90;
                            local_10ac = 0x822;
                            local_10aa = (ulong *)0x1007c1a34;
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x1003436b2;
                            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                                &local_10b8,0x16);
                          }
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100342e90;
                          FUN_1001782e9(0,0);
                          goto LAB_10034137a;
                        }
                        local_1528 = puVar3;
                        if (*(int *)((long)puVar3 + 0x3c) != 0x46494c45) {
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003433ad;
                          uVar13 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003433bd;
                          cVar6 = _os_log_type_enabled(uVar13,0x10);
                          if (cVar6 != '\0') {
                            local_10b8 = 0x8220202;
                            local_10b4 = (ulong *)0x1007a0a90;
                            local_10ac = 0x822;
                            local_10aa = (ulong *)0x1007c20f7;
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x100343a81;
                            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                                &local_10b8,0x16);
                          }
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003433ce;
                          FUN_1001782e9(0,0);
                          goto LAB_10034137a;
                        }
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x1003414ff;
                        FUN_100476928(lVar14,local_c78);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100341509;
                        uVar8 = FUN_1004744bf(lVar14,0);
                        local_1540 = CONCAT44(local_1540._4_4_,uVar8);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100341520;
                        iVar7 = FUN_1002b0559(local_1528,0xc2);
                        if (iVar7 == -0x80) {
LAB_1003436d4:
                          if (DAT_1008c75c0 != -1) {
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x100344085;
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          uVar25 = DAT_1008c75b8;
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003436f6;
                          cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
                          if (cVar6 == '\0') goto LAB_10034137a;
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100343711;
                          FUN_1001b8dfc(&local_10c8,local_c78);
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10034371d;
                          local_10aa = (ulong *)FUN_1001b83ae(&local_10c8);
                          local_10b8 = 0x8000302;
                          local_10ac = 0x822;
                          local_10a2 = 0x400;
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100343776;
                          local_10b4 = puVar4;
                          local_10a0 = iVar7;
                          __os_log_impl(0x100000000,uVar25,1,
                                        "airtraffic> could not prepare device track %lld (\"%{public}s\") (%d)"
                                        ,&local_10b8,0x1c);
                          puVar26 = &local_10c8;
                        }
                        else {
                          if (iVar7 != 0) {
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x1003436bc;
                            uVar13 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x1003436cc;
                            cVar6 = _os_log_type_enabled(uVar13,0x10);
                            if (cVar6 != '\0') {
                              local_10b8 = 0x8220202;
                              local_10b4 = (ulong *)0x1007a0a90;
                              local_10ac = 0x400;
                              local_10aa = (ulong *)CONCAT44(local_10aa._4_4_,iVar7);
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x100343bc2;
                              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",
                                                  &local_10b8,0x12);
                            }
                            goto LAB_1003436d4;
                          }
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100341548;
                          iVar7 = FUN_1002b1039(local_1528,local_a78);
                          if ((iVar7 != -0x80) && (iVar7 != 0)) {
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10034155a;
                            local_1530 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341572;
                            cVar6 = _os_log_type_enabled(local_1530,0x10);
                            if (cVar6 != '\0') {
                              local_10b8 = 0x8220202;
                              local_10b4 = (ulong *)0x1007a0a90;
                              local_10ac = 0x400;
                              local_10aa = (ulong *)CONCAT44(local_10aa._4_4_,iVar7);
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x100343e88;
                              __os_log_error_impl(0x100000000,local_1530,0x10,
                                                  "%{public}s: err == (%d)",&local_10b8,0x12);
                            }
                          }
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10034158d;
                          iVar7 = FUN_100187cb2(local_a78,local_e98);
                          local_1530 = CONCAT44(local_1530._4_4_,iVar7);
                          if (iVar7 != 0 || local_e98[0] == 0) {
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x1003415b3;
                            uVar13 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x1003415c3;
                            cVar6 = _os_log_type_enabled(uVar13,0x10);
                            if (cVar6 != '\0') {
                              local_10b8 = 0x8220202;
                              local_10b4 = (ulong *)0x1007a0a90;
                              local_10ac = 0x822;
                              local_10aa = (ulong *)0x1007c2125;
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x100343da3;
                              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)"
                                                  ,&local_10b8,0x16);
                            }
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x1003415d4;
                            FUN_1001782e9(0,0);
                          }
                          if (((uint)local_1530 != 0) || (local_e98[0] == 0)) {
                            uVar25 = local_1528[8];
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x1003415ff;
                            FUN_1001e22fc((int)uVar25,local_e98);
                            if (local_e98[0] == 0) {
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x10034160e;
                              uVar13 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x10034161e;
                              cVar6 = _os_log_type_enabled(uVar13,0x10);
                              if (cVar6 != '\0') {
                                local_10b8 = 0x8220202;
                                local_10b4 = (ulong *)0x1007a0a90;
                                local_10ac = 0x822;
                                local_10aa = (ulong *)0x1007c214a;
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x100343fb8;
                                __os_log_error_impl(0x100000000,uVar13,0x10,
                                                    "%{public}s: (%{public}s)",&local_10b8,0x16);
                              }
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x10034162f;
                              FUN_1001782e9(0,0);
                            }
                          }
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10034163e;
                          lVar14 = FUN_10034b68e(local_1520,lVar14);
                          if (lVar14 != 0) {
                            if (*(char *)(lVar14 + 0x45) == '\n') {
                              local_1530 = **(ulong **)(lVar14 + 8);
                              if (((uint)local_1540 >> 0x16 & 1) != 0) {
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x100341679;
                                FUN_10017fbfb(&local_658);
                              }
                              if ((local_1540 & 0x900000) == 0) {
                                if ((local_1540 & 0x400008) == 0) {
                                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100343bd8;
                                  FUN_1001e0b83(puVar4,local_e78,0);
                                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100343bf2;
                                  iVar7 = FUN_10017ed94(local_e78,local_e98,local_1098);
                                  if (iVar7 != -0x80) {
                                    uVar13 = 0x12;
                                    if (iVar7 == 0) goto LAB_100343c0c;
                                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100343f06;
                                    uVar13 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100343f16;
                                    cVar6 = _os_log_type_enabled(uVar13,0x10);
                                    if (cVar6 != '\0') {
                                      local_10aa = (ulong *)CONCAT44(local_10aa._4_4_,iVar7);
                                      goto LAB_100342717;
                                    }
                                  }
                                }
                                else {
                                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100343ac8;
                                  iVar7 = FUN_10017ed94(local_c78,local_e98,local_1098);
                                  uVar13 = 0x10;
                                  if (iVar7 != -0x80) {
                                    if (iVar7 == 0) {
LAB_100343c0c:
                                      *(ulong *)(&stack0xffffffffffffffd0 + lVar12) =
                                           (ulong)*(uint *)(local_1520 + 0x28);
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100343c3e;
                                      iVar7 = FUN_100405931(local_1528,&local_658,uVar13,lVar14,
                                                            local_1098,FUN_10034b6f4);
                                      if (iVar7 != -0x80) {
                                        if (iVar7 == 0) {
                                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100343c61;
                                          uVar16 = FUN_100165701(DAT_1008c4d90,local_1530);
                                          uVar13 = *(undefined8 *)(local_1520 + 0x167f8);
                                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100343c7d;
                                          FUN_100171502(uVar13,uVar16,lVar15);
                                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100343c85;
                                          FUN_10017060f(uVar16);
                                          goto LAB_100342b09;
                                        }
                                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100343ca7;
                                        uVar13 = FUN_1001cc310();
                                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100343cb7;
                                        cVar6 = _os_log_type_enabled(uVar13,0x10);
                                        if (cVar6 != '\0') {
                                          local_10b8 = 0x8220202;
                                          local_10b4 = (ulong *)0x1007a0a90;
                                          local_10ac = 0x400;
                                          local_10aa = (ulong *)CONCAT44(local_10aa._4_4_,iVar7);
                                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10034406d;
                                          __os_log_error_impl(0x100000000,uVar13,0x10,
                                                              "%{public}s: err == (%d)",&local_10b8,
                                                              0x12);
                                        }
                                      }
                                      if (DAT_1008c75c0 != -1) {
                                        *(undefined8 *)((long)&local_38 + lVar12) = 0x1003440cd;
                                        _dispatch_once(&DAT_1008c75c0,
                                                       &PTR___NSConcreteGlobalBlock_100857068);
                                      }
                                      uVar25 = DAT_1008c75b8;
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100343ce1;
                                      cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
                                      if (cVar6 != '\0') {
                                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100343cfc;
                                        FUN_1001b8dfc(&local_10b8,local_c78);
                                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100343d08;
                                        local_10c4 = FUN_1001b83ae(&local_10b8);
                                        pcVar22 = 
                                        "airtraffic> failed to queue file copy for library track \"%{public}s\""
                                        ;
                                        goto LAB_100343987;
                                      }
                                    }
                                    else {
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100343ae7;
                                      uVar13 = FUN_1001cc310();
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100343af7;
                                      cVar6 = _os_log_type_enabled(uVar13,0x10);
                                      if (cVar6 != '\0') {
                                        local_10aa = (ulong *)CONCAT44(local_10aa._4_4_,iVar7);
LAB_100342717:
                                        local_10ac = 0x400;
                                        local_10b4 = (ulong *)0x1007a0a90;
                                        local_10b8 = 0x8220202;
                                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100342729;
                                        __os_log_error_impl(0x100000000,uVar13,0x10,
                                                            "%{public}s: err == (%d)",&local_10b8,
                                                            0x12);
                                      }
                                    }
                                  }
                                }
                              }
                              else {
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10034169c;
                                iVar7 = FUN_10017d489(local_a78,local_1098);
                                uVar13 = 0x10;
                                if (iVar7 != -0x80) {
                                  if (iVar7 == 0) goto LAB_100343c0c;
                                  *(undefined8 *)((long)&local_38 + lVar12) = 0x1003416bb;
                                  uVar13 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar12) = 0x1003416cb;
                                  cVar6 = _os_log_type_enabled(uVar13,0x10);
                                  if (cVar6 != '\0') {
                                    local_10aa = (ulong *)CONCAT44(local_10aa._4_4_,iVar7);
                                    goto LAB_100342717;
                                  }
                                }
                              }
                            }
                            else {
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x1003438f6;
                              uVar13 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x100343906;
                              cVar6 = _os_log_type_enabled(uVar13,0x10);
                              if (cVar6 != '\0') {
                                local_10b8 = 0x8220202;
                                local_10b4 = (ulong *)0x1007a0a90;
                                local_10ac = 0x822;
                                local_10aa = (ulong *)0x1007c217c;
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x100343efc;
                                __os_log_error_impl(0x100000000,uVar13,0x10,
                                                    "%{public}s: (%{public}s)",&local_10b8,0x16);
                              }
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x100343917;
                              FUN_1001782e9(0,0);
                              if (DAT_1008c75c0 != -1) {
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x1003440b5;
                                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068
                                              );
                              }
                              uVar25 = DAT_1008c75b8;
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x100343939;
                              cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
                              if (cVar6 != '\0') {
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x100343954;
                                FUN_1001b8dfc(&local_10b8,local_c78);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x100343960;
                                local_10c4 = FUN_1001b83ae(&local_10b8);
                                pcVar22 = 
                                "airtraffic> library track \"%{public}s\" not scheduled for sync";
                                goto LAB_100343987;
                              }
                            }
                            goto LAB_10034137a;
                          }
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100343843;
                          uVar13 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100343853;
                          cVar6 = _os_log_type_enabled(uVar13,0x10);
                          if (cVar6 != '\0') {
                            local_10b8 = 0x8220202;
                            local_10b4 = (ulong *)0x1007a0a90;
                            local_10ac = 0x822;
                            local_10aa = (ulong *)0x1007c215c;
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x100343e17;
                            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                                &local_10b8,0x16);
                          }
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100343864;
                          FUN_1001782e9(0,0);
                          if (DAT_1008c75c0 != -1) {
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10034409d;
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          uVar25 = DAT_1008c75b8;
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100343886;
                          cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
                          if (cVar6 == '\0') goto LAB_10034137a;
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003438a1;
                          FUN_1001b8dfc(&local_10b8,local_c78);
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003438ad;
                          local_10c4 = FUN_1001b83ae(&local_10b8);
                          pcVar22 = 
                          "airtraffic> could not find library track \"%{public}s\" for upload";
LAB_100343987:
                          local_10c8 = 0x8220102;
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100343999;
                          __os_log_impl(0x100000000,uVar25,1,pcVar22,&local_10c8,0xc);
                          puVar26 = &local_10b8;
                        }
                        goto LAB_100342c0a;
                      }
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100343040;
                      uVar13 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100343050;
                      cVar6 = _os_log_type_enabled(uVar13,0x10);
                      if (cVar6 != '\0') {
                        local_10b8 = 0x8220202;
                        local_10b4 = (ulong *)0x1007a0a90;
                        local_10ac = 0x822;
                        local_10aa = (ulong *)0x1007c20dc;
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x1003437d9;
                        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                            &local_10b8,0x16);
                      }
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100343061;
                      FUN_1001782e9(0,0);
                      if (DAT_1008c75c0 != -1) {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100343fe8;
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      uVar25 = DAT_1008c75b8;
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100343083;
                      cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
                      if (cVar6 == '\0') goto LAB_10034137a;
                      local_10b8 = 0x8000100;
                      uVar13 = 1;
                      pcVar22 = "airtraffic> could not find device track %lld for upload";
                      local_10b4 = puVar4;
                    }
                    uVar27 = 0x10;
                    puVar26 = &local_10b8;
                    uVar16 = 0xc;
                    goto LAB_100341375;
                  }
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100341f86;
                  uVar13 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100341f96;
                  cVar6 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar6 != '\0') {
                    local_10b8 = 0x8220202;
                    local_10b4 = (ulong *)0x1007a0a90;
                    local_10ac = 0x822;
                    local_10aa = (ulong *)0x1007c03fd;
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100342c6b;
                    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                        &local_10b8,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100341fa7;
                  FUN_1001782e9(0,0);
                }
                uVar27 = 0xf;
              }
            }
            else {
              if (DAT_1008c75c0 != -1) {
                *(undefined8 *)((long)&local_38 + lVar12) = 0x1003432d4;
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar25 = DAT_1008c75b8;
              *(undefined8 *)((long)&local_38 + lVar12) = 0x100341337;
              cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
              uVar27 = 0x10;
              if (cVar6 != '\0') {
                uStack_1514 = uVar9;
                pcVar22 = "airtraffic> unsupported asset class %u";
                uVar27 = 0x10;
                goto LAB_100341368;
              }
            }
          }
          else {
LAB_100341ac9:
            if (DAT_1008c75c0 != -1) {
              *(undefined8 *)((long)&local_38 + lVar12) = 0x10034363e;
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar25 = DAT_1008c75b8;
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341aeb;
            cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
            uVar27 = 0x10;
            if (cVar6 == '\0') goto LAB_10034137a;
            pcVar22 = "airtraffic> unknown asset class %u";
            uVar27 = 0x10;
            uStack_1514 = uVar9;
LAB_100341368:
            local_1518 = 0x4000100;
            uVar13 = 1;
            puVar26 = &local_1518;
            uVar16 = 8;
LAB_100341375:
            *(undefined8 *)((long)&local_38 + lVar12) = 0x10034137a;
            __os_log_impl(0x100000000,uVar25,uVar13,pcVar22,puVar26,uVar16);
          }
LAB_10034137a:
          *(undefined4 *)(&stack0xffffffffffffffd0 + lVar12) = uVar27;
          *(undefined4 *)(&stack0xffffffffffffffd8 + lVar12) = 0;
          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003413a8;
          FUN_10032f806(local_1520,local_1538,local_1558,0,0,0);
          goto LAB_100342b09;
        }
        switch(local_1574) {
        case 1:
          uVar13 = *(undefined8 *)(local_1520 + 0x167d0);
          *(undefined8 *)((long)&local_38 + lVar12) = 0x10034118b;
          lVar14 = FUN_100166b7f(uVar13,local_1538);
          if (lVar14 == 0) {
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341d7c;
            uVar13 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341d8c;
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            if (cVar6 != '\0') {
              local_1518 = 0x8220202;
              uStack_1514 = 0x7a0a90;
              uStack_1510 = 1;
              local_150c = 0x822;
              local_150a = "appInfoDict != nullptr";
              *(undefined8 *)((long)&local_38 + lVar12) = 0x1003428f5;
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_1518);
            }
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341d9d;
            FUN_1001782e9(0,0);
            if (DAT_1008c75c0 != -1) {
              *(undefined8 *)((long)&local_38 + lVar12) = 0x100343809;
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar25 = DAT_1008c75b8;
            iVar7 = 0x10;
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341dc5;
            cVar6 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            if (cVar6 == '\0') goto LAB_100341a09;
            local_1518 = 0x8420102;
            uStack_1514 = (uint)local_1538;
            uStack_1510 = (undefined4)((ulong)local_1538 >> 0x20);
            uVar13 = 0x10;
            pcVar22 = "airtraffic> could not find application \"%{public}@\"";
            iVar7 = 0x10;
LAB_100341a04:
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341a09;
            __os_log_impl(0x100000000,uVar25,uVar13,pcVar22,&local_1518);
            goto LAB_100341a09;
          }
          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003411a6;
          pcVar22 = (char *)FUN_100166c1b(lVar14,PTR_cf_Name_10083db60);
          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003411b8;
          local_1528 = (ulong *)FUN_100166c1b(lVar14,PTR_cf_InternalVersion_10083db18);
          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003411ce;
          uVar13 = FUN_100166b7f(lVar15,&cf_Variant);
          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003411dd;
          pcVar17 = (char *)FUN_100166c1b(uVar13,&cf_Version);
          if (pcVar17 != (char *)0x0) {
            *(undefined8 *)((long)&local_38 + lVar12) = 0x1003411fd;
            lVar18 = FUN_100173bb7(pcVar17,local_1528,0x40);
            if (lVar18 == 1) {
              if (DAT_1008c75c0 != -1) {
                *(undefined8 *)((long)&local_38 + lVar12) = 0x100343839;
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar25 = DAT_1008c75b8;
              *(undefined8 *)((long)&local_38 + lVar12) = 0x100341229;
              cVar6 = _os_log_type_enabled(DAT_1008c75b8,0x10);
              iVar7 = 3;
              if (cVar6 != '\0') {
                local_1518 = 0x8420302;
                uStack_1514 = (uint)local_1538;
                uStack_1510 = (undefined4)((ulong)local_1538 >> 0x20);
                local_150c = 0x842;
                local_1502 = 0x842;
                local_1500 = (int)local_1528;
                uStack_14fc = (undefined2)((ulong)local_1528 >> 0x20);
                uStack_14fa = (undefined2)((ulong)local_1528 >> 0x30);
                uVar13 = 0x10;
                pcVar22 = 
                "airtraffic> version mismatch for application \"%{public}@\" (requested version = %{public}@, available version = %{public}@)"
                ;
                iVar7 = 3;
                local_150a = pcVar17;
                goto LAB_100341a04;
              }
              goto LAB_100341a09;
            }
          }
          *(undefined8 *)((long)&local_38 + lVar12) = 0x100341bbd;
          uVar9 = FUN_1004ec441(local_1520,lVar14,0);
          if (uVar9 < 4) {
            uVar13 = *(undefined8 *)(local_1520 + 0x30);
            uVar27 = *(undefined4 *)(local_1520 + 0x28);
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341ec6;
            iVar10 = FUN_100405a22(uVar13,lVar14,0,FUN_10034b358,uVar27);
            if (DAT_1008c75c0 != -1) {
              *(undefined8 *)((long)&local_38 + lVar12) = 0x100343821;
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar25 = DAT_1008c75b8;
            if (iVar10 == 0) {
              *(undefined8 *)((long)&local_38 + lVar12) = 0x1003421d0;
              cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar6 != '\0') {
                local_1518 = 0x8420302;
                uStack_1514 = (uint)local_1538;
                uStack_1510 = (undefined4)((ulong)local_1538 >> 0x20);
                local_150c = 0x842;
                local_1502 = 0x842;
                local_1500 = (int)local_1528;
                uStack_14fc = (undefined2)((ulong)local_1528 >> 0x20);
                uStack_14fa = (undefined2)((ulong)local_1528 >> 0x30);
                *(undefined8 *)((long)&local_38 + lVar12) = 0x10034223b;
                local_150a = pcVar22;
                __os_log_impl(0x100000000,uVar25,1,
                              "airtraffic> transferring application \"%{public}@\" (\"%{public}@\"), version %{public}@"
                              ,&local_1518);
              }
              uVar13 = *(undefined8 *)(local_1520 + 0x167f0);
              *(undefined8 *)((long)&local_38 + lVar12) = 0x100342258;
              FUN_100171502(uVar13,local_1538,lVar15);
              goto LAB_100342b09;
            }
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341ef4;
            cVar6 = _os_log_type_enabled(DAT_1008c75b8);
            if (cVar6 != '\0') {
              local_1518 = 0x8420302;
              uStack_1514 = (uint)local_1538;
              uStack_1510 = (undefined4)((ulong)local_1538 >> 0x20);
              local_150c = 0x842;
              local_1502 = 0x400;
              *(undefined8 *)((long)&local_38 + lVar12) = 0x100341f58;
              local_150a = pcVar22;
              local_1500 = iVar10;
              __os_log_impl(0x100000000,uVar25,0x10,
                            "airtraffic> failed to transfer application \"%{public}@\" (\"%{public}@\") (%d)"
                            ,&local_1518);
            }
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341f60;
            iVar7 = FUN_10032f3b4(iVar10);
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341f79;
            uVar11 = FUN_1003471b5(local_1520,0,0,pcVar22,iVar10);
            goto LAB_100342ad6;
          }
          if ((uVar9 & 0xfffffffe) == 0x12) {
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341be7;
            local_1528 = (ulong *)FUN_100167d88(lVar14,PTR_cf_DRMUserID_10083db28);
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341bfd;
            uVar19 = FUN_100167d88(lVar14,PTR_cf_DRMDownloaderUserID_10083db48);
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341c0f;
            local_1540 = FUN_100167d88(lVar14,PTR_cf_DRMKeyID_10083db38);
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341c25;
            lVar14 = FUN_100167d88(lVar14,PTR_cf_DRMFamilyID_10083db30);
            if (DAT_1008c75c0 != -1) {
              *(undefined8 *)((long)&local_38 + lVar12) = 0x100343a25;
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            local_1530 = DAT_1008c75b8;
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341c4e;
            cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (lVar14 == 0) {
              if (cVar6 != '\0') {
                *(undefined8 *)((long)&local_38 + lVar12) = 0x100342533;
                uVar13 = FUN_10035f712(uVar9);
                local_1518 = 0x8420502;
                uStack_1514 = (uint)local_1538;
                uStack_1510 = (undefined4)((ulong)local_1538 >> 0x20);
                local_1500 = (int)uVar13;
                uStack_14fc = (undefined2)((ulong)uVar13 >> 0x20);
                uStack_14fa = (undefined2)((ulong)uVar13 >> 0x30);
                uStack_14f8 = 0x800;
                uStack_14f6 = SUB84(local_1528,0);
                uStack_14f2 = (undefined4)((ulong)local_1528 >> 0x20);
                local_14ee = 0x800;
                local_14ec = local_1540;
                pcVar17 = 
                "airtraffic> cannot accept application \"%{public}@\" (\"%{public}@\") (%{public}s) (user id = %llu, key id = %llu)"
                ;
                uVar13 = 0x34;
                uVar25 = local_1530;
                goto LAB_1003425c0;
              }
            }
            else if (cVar6 != '\0') {
              *(undefined8 *)((long)&local_38 + lVar12) = 0x100341c67;
              uVar13 = FUN_10035f712(uVar9);
              local_1518 = 0x8420702;
              uStack_1514 = (uint)local_1538;
              uStack_1510 = (undefined4)((ulong)local_1538 >> 0x20);
              local_1500 = (int)uVar13;
              uStack_14fc = (undefined2)((ulong)uVar13 >> 0x20);
              uStack_14fa = (undefined2)((ulong)uVar13 >> 0x30);
              uStack_14f8 = 0x800;
              uStack_14f6 = SUB84(local_1528,0);
              uStack_14f2 = (undefined4)((ulong)local_1528 >> 0x20);
              local_14ee = 0x800;
              local_14e4 = 0x800;
              local_14da = 0x800;
              local_14d8 = local_1540;
              pcVar17 = 
              "airtraffic> cannot accept application \"%{public}@\" (\"%{public}@\") (%{public}s) (user id = %llu, downloader id = %llu, family id = %llu, key id = %llu)"
              ;
              uVar13 = 0x48;
              uVar25 = local_1530;
              local_14ec = uVar19;
              local_14e2 = lVar14;
LAB_1003425c0:
              local_1502 = 0x822;
              local_150c = 0x842;
              *(undefined8 *)((long)&local_38 + lVar12) = 0x1003425c5;
              local_150a = pcVar22;
              __os_log_impl(0x100000000,uVar25,1,pcVar17,&local_1518,uVar13);
            }
          }
          else {
            if (DAT_1008c75c0 != -1) {
              *(undefined8 *)((long)&local_38 + lVar12) = 0x100343a0d;
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar25 = DAT_1008c75b8;
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100342156;
            cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar6 != '\0') {
              *(undefined8 *)((long)&local_38 + lVar12) = 0x100342166;
              uVar13 = FUN_10035f712(uVar9);
              local_1518 = 0x8420302;
              uStack_1514 = (uint)local_1538;
              uStack_1510 = (undefined4)((ulong)local_1538 >> 0x20);
              local_1500 = (int)uVar13;
              uStack_14fc = (undefined2)((ulong)uVar13 >> 0x20);
              uStack_14fa = (undefined2)((ulong)uVar13 >> 0x30);
              pcVar17 = 
              "airtraffic> cannot accept application \"%{public}@\" (\"%{public}@\") (%{public}s)";
              uVar13 = 0x20;
              goto LAB_1003425c0;
            }
          }
          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003425d8;
          FUN_1001b7b04(&local_1518,"");
          *(undefined8 *)(&stack0xffffffffffffffd0 + lVar12) = 0;
          *(undefined8 *)((long)&local_38 + lVar12) = 0x100342603;
          uVar11 = FUN_10032f46e(local_1520,0,0,pcVar22,&local_1518);
          *(undefined8 *)((long)&local_38 + lVar12) = 0x10034260e;
          FUN_1001b7a50(&local_1518);
          if ((int)uVar9 < 0x13) {
            if (uVar9 - 8 < 2) {
              iVar7 = 6;
            }
            else {
              iVar7 = 4;
              if (uVar9 != 0x12) {
LAB_10034264a:
                iVar7 = 3;
              }
            }
          }
          else if (uVar9 == 0x1b) {
            iVar7 = 0xe;
          }
          else {
            if (uVar9 != 0x13) goto LAB_10034264a;
            iVar7 = 5;
          }
          goto LAB_100342adb;
        case 2:
          pcVar22 = (char *)CONCAT44(uStack_154c,local_1550);
          uVar13 = *(undefined8 *)(local_1520 + 0x30);
          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003418ea;
          local_1528 = (ulong *)FUN_100300729(uVar13);
          if (local_1528 == (ulong *)0x0) {
            if (DAT_1008c75c0 != -1) {
              *(undefined8 *)((long)&local_38 + lVar12) = 0x1003437f1;
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar25 = DAT_1008c75b8;
            iVar7 = 0x10;
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341e35;
            cVar6 = _os_log_type_enabled(DAT_1008c75b8);
            if (cVar6 != '\0') {
              local_1518 = 0x8000100;
              uStack_1514 = uVar11;
              uStack_1510 = uVar27;
              pcVar22 = "airtraffic> could not find track %lld";
              puVar26 = &local_1518;
LAB_100341e6b:
              iVar7 = 0x10;
              *(undefined8 *)((long)&local_38 + lVar12) = 0x100341e76;
              __os_log_impl(0x100000000,uVar25,0x10,pcVar22,puVar26);
            }
          }
          else {
            uVar25 = local_1528[0xb];
            if (((uVar25 == 0) || (*(long *)(uVar25 + 8) == 0)) ||
               (*(long *)(*(long *)(uVar25 + 8) + 0x10) == 0)) {
              *(undefined8 *)((long)&local_38 + lVar12) = 0x100341b86;
              uVar13 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar12) = 0x100341b96;
              cVar6 = _os_log_type_enabled(uVar13);
              if (cVar6 != '\0') {
                local_1518 = 0x8220202;
                uStack_1514 = 0x7a0a90;
                uStack_1510 = 1;
                local_150c = 0x822;
                local_150a = "TrackInstanceIsValid(deviceTrackInstance)";
                *(undefined8 *)((long)&local_38 + lVar12) = 0x1003426b7;
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_1518);
              }
              *(undefined8 *)((long)&local_38 + lVar12) = 0x100341ba7;
              FUN_1001782e9(0);
              goto LAB_100341d3b;
            }
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341935;
            lVar14 = FUN_100166b7f(lVar15);
            if (lVar14 != 0) {
              *(undefined8 *)((long)&local_38 + lVar12) = 0x100341954;
              cVar6 = FUN_100167740(lVar14,&cf_AssetParts,local_e78);
              if ((cVar6 != '\0') && ((local_e78[0] & 1) == 0)) {
                *(undefined8 *)((long)&local_38 + lVar12) = 0x10034197d;
                iVar7 = FUN_1003450bf(local_1520,uVar25,lVar15,0);
                break;
              }
            }
            if (local_1528[0x31] == 0) {
              if (*(long *)(local_1520 + 0x30) == 0) goto LAB_100341d3b;
              lVar14 = *(long *)(*(long *)(local_1520 + 0x30) + 0x2d20);
              if (lVar14 == 0) {
                *(undefined8 *)((long)&local_38 + lVar12) = 0x10034295b;
                uVar13 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar12) = 0x10034296b;
                cVar6 = _os_log_type_enabled(uVar13,0x10);
                if (cVar6 != '\0') {
                  local_238 = 0x8220202;
                  local_234 = "Assertion failure";
                  local_22c = 0x822;
                  local_22a = "handlerData->trackData->u.iPod.copyFileSpecMap != nullptr";
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x10034342a;
                  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_238)
                  ;
                }
                *(undefined8 *)((long)&local_38 + lVar12) = 0x10034297c;
                FUN_1001782e9(0,0);
                if (DAT_1008c75c0 != -1) {
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100343dbb;
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar25 = DAT_1008c75b8;
                *(undefined8 *)((long)&local_38 + lVar12) = 0x10034299e;
                cVar6 = _os_log_type_enabled(DAT_1008c75b8);
                iVar7 = 3;
                if (cVar6 == '\0') break;
                *(undefined8 *)((long)&local_38 + lVar12) = 0x1003429bf;
                FUN_100476ac1(local_c78,local_1528);
                *(undefined8 *)((long)&local_38 + lVar12) = 0x1003429ce;
                local_234 = (char *)FUN_1001b83ae(local_c78);
                local_22a = "YES";
                if (-1 < *(int *)((long)local_1528 + 0xc2)) {
                  local_22a = "NO";
                }
                pcVar22 = 
                "airtraffic> no file to copy for device track \"%{public}s\" (isDeviceDownload = %{public}s)"
                ;
              }
              else {
                lVar18 = *(long *)(lVar14 + 8);
                if (lVar18 != 0) {
                  uVar19 = *local_1528;
                  lVar24 = lVar14 + 8;
                  do {
                    bVar28 = *(ulong *)(lVar18 + 0x20) < uVar19;
                    if (!bVar28) {
                      lVar24 = lVar18;
                    }
                    lVar18 = *(long *)(lVar18 + (ulong)bVar28 * 8);
                  } while (lVar18 != 0);
                  if ((lVar24 != lVar14 + 8) && (*(ulong *)(lVar24 + 0x20) <= uVar19)) {
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100342eca;
                    _memcpy(&local_658,(void *)(lVar24 + 0x28),0x420);
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100342ed9;
                    iVar7 = FUN_10017d489(&local_658,local_a78);
                    if ((iVar7 != -0x80) && (iVar7 != 0)) {
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100342eeb;
                      uVar13 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100342efb;
                      cVar6 = _os_log_type_enabled(uVar13,0x10);
                      if (cVar6 != '\0') {
                        local_238 = 0x8220202;
                        local_234 = "Assertion failure";
                        local_22c = 0x400;
                        local_22a = (char *)CONCAT44(local_22a._4_4_,iVar7);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x1003439f5;
                        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",
                                            &local_238);
                      }
                    }
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100342f14;
                    FUN_1001c62d9(&local_1518,0x448);
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100342f2f;
                    _memcpy(&local_1518,&local_658,0x420);
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100342f4b;
                    uVar9 = FUN_1004e9e57(local_1520,0x46494c45,&local_1518,0,1);
                    if (uVar9 < 4) {
                      cVar6 = '\x10';
                      if (uVar9 == 3) {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10034343e;
                        lVar14 = FUN_100166b7f(lVar15,&cf_Variant);
                        if (lVar14 != 0) {
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100343454;
                          cVar6 = FUN_100167dd2(lVar14,&cf_TransferUnzipped,0);
                          cVar6 = (cVar6 != '\0') * '\b' + '\x10';
                        }
                      }
                      else if (uVar9 == 1) {
                        cVar6 = '\x11';
                      }
                      *(ulong *)(&stack0xffffffffffffffd0 + lVar12) =
                           (ulong)*(uint *)(local_1520 + 0x28);
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10034348f;
                      iVar10 = FUN_10040503d(&local_658,0,cVar6,uVar25,0);
                      if (iVar10 == 0) {
                        uVar25 = *local_1528;
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100343577;
                        uVar16 = FUN_100165701(DAT_1008c4d90,uVar25);
                        uVar13 = *(undefined8 *)(local_1520 + 0x167f0);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100343593;
                        FUN_100171502(uVar13,uVar16,lVar15);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10034359b;
                        FUN_10017060f(uVar16);
                        goto LAB_10034359b;
                      }
                      if (DAT_1008c75c0 != -1) {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100344018;
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      uVar25 = DAT_1008c75b8;
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x1003434bc;
                      cVar6 = _os_log_type_enabled(DAT_1008c75b8);
                      if (cVar6 != '\0') {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x1003434d3;
                        FUN_1001b8dfc(local_c78,local_a78);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x1003434df;
                        local_234 = (char *)FUN_1001b83ae(local_c78);
                        local_238 = 0x8220202;
                        local_22c = 0x400;
                        local_22a = (char *)CONCAT44(local_22a._4_4_,iVar10);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100343528;
                        __os_log_impl(0x100000000,uVar25,0x10,
                                      "airtraffic> failed to copy file \"%{public}s\" (%d)",
                                      &local_238);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100343534;
                        FUN_1001b7a50(local_c78);
                      }
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10034353c;
                      iVar7 = FUN_10032f3b4(iVar10);
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100343559;
                      uVar11 = FUN_1003471b5(local_1520,0,&local_658,0,iVar10);
                    }
                    else {
                      if (DAT_1008c75c0 != -1) {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100344000;
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      uVar25 = DAT_1008c75b8;
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100342f78;
                      cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
                      if (cVar6 != '\0') {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100342f8f;
                        FUN_1001b8dfc(local_c78,local_a78);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100342f9b;
                        pcVar22 = (char *)FUN_1001b83ae(local_c78);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100342fa5;
                        local_22a = (char *)FUN_10035f712(uVar9);
                        local_238 = 0x8220202;
                        local_22c = 0x822;
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100342fee;
                        local_234 = pcVar22;
                        __os_log_impl(0x100000000,uVar25,1,
                                      "airtraffic> cannot accept file \"%{public}s\" (%{public}s)",
                                      &local_238);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100342ffa;
                        FUN_1001b7a50(local_c78);
                      }
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10034300f;
                      uVar11 = FUN_10032f3f9(local_1520,&local_658,uVar9);
                      if ((int)uVar9 < 0x13) {
                        if (uVar9 - 8 < 2) goto LAB_100342df2;
                        iVar7 = 4;
                        if (uVar9 == 0x12) goto LAB_100342ad6;
                      }
                      else {
                        if (uVar9 == 0x1b) goto LAB_10034339d;
                        if (uVar9 == 0x13) goto LAB_100342ea7;
                      }
LAB_100343122:
                      iVar7 = 3;
                    }
                    goto LAB_100342ad6;
                  }
                }
                *(undefined8 *)((long)&local_38 + lVar12) = 0x1003423c4;
                uVar13 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar12) = 0x1003423d4;
                cVar6 = _os_log_type_enabled(uVar13,0x10);
                if (cVar6 != '\0') {
                  local_238 = 0x8220202;
                  local_234 = "Assertion failure";
                  local_22c = 0x822;
                  local_22a = 
                  "copyFileSpecIter != handlerData->trackData->u.iPod.copyFileSpecMap->end()";
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100343385;
                  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_238)
                  ;
                }
                *(undefined8 *)((long)&local_38 + lVar12) = 0x1003423e5;
                FUN_1001782e9(0,0);
                if (DAT_1008c75c0 != -1) {
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100343d47;
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar25 = DAT_1008c75b8;
                *(undefined8 *)((long)&local_38 + lVar12) = 0x100342407;
                cVar6 = _os_log_type_enabled(DAT_1008c75b8);
                iVar7 = 3;
                if (cVar6 == '\0') break;
                *(undefined8 *)((long)&local_38 + lVar12) = 0x100342428;
                FUN_100476ac1(local_c78,local_1528);
                *(undefined8 *)((long)&local_38 + lVar12) = 0x100342437;
                local_234 = (char *)FUN_1001b83ae(local_c78);
                local_22a = "YES";
                if (-1 < *(int *)((long)local_1528 + 0xc2)) {
                  local_22a = "NO";
                }
                pcVar22 = 
                "airtraffic> could not find file to copy for device track \"%{public}s\" (isDeviceDownload = %{public}s)"
                ;
              }
              local_22c = 0x822;
              local_238 = 0x8220202;
              puVar23 = local_c78;
              puVar26 = &local_238;
LAB_100342ac0:
              iVar7 = 3;
              *(undefined8 *)((long)&local_38 + lVar12) = 0x100342acb;
              __os_log_impl(0x100000000,uVar25,0x10,pcVar22,puVar26);
              *(undefined8 *)((long)&local_38 + lVar12) = 0x100342ad3;
              FUN_1001b7a50(puVar23);
            }
            else {
              uVar19 = local_1528[0x30];
              *(undefined8 *)((long)&local_38 + lVar12) = 0x100341fd3;
              local_1540 = FUN_100309333(uVar19);
              if ((local_1540 == 0) || (*(int *)(local_1540 + 0x84) != 0x2062696c)) {
                if (DAT_1008c75c0 != -1) {
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100343a99;
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar25 = DAT_1008c75b8;
                iVar7 = 0x10;
                *(undefined8 *)((long)&local_38 + lVar12) = 0x100342312;
                cVar6 = _os_log_type_enabled(DAT_1008c75b8);
                if (cVar6 != '\0') {
                  local_654 = (char *)local_1528[0x30];
                  local_658 = 0x8000100;
                  pcVar22 = "airtraffic> could not find source library 0x%016llX";
                  puVar26 = &local_658;
                  goto LAB_100341e6b;
                }
              }
              else {
                uVar19 = local_1528[0x31];
                *(undefined8 *)((long)&local_38 + lVar12) = 0x10034200d;
                local_1568 = FUN_100300729(local_1540,uVar19);
                if (local_1568 != 0) {
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100342030;
                  FUN_100476928(local_1568,&local_1518);
                  plVar21 = *(long **)(local_1568 + 0x58);
                  if (plVar21 == (long *)0x0) {
                    local_1530 = 5;
                    local_1570 = (long *)0x0;
                  }
                  else {
                    local_1530 = 5;
                    local_1548 = (long *)0x0;
                    local_1570 = (long *)0x0;
                    do {
                      if (*(int *)((long)plVar21 + 0x3c) == 0x46494c45) {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100342084;
                        iVar7 = FUN_1002b0559(plVar21,0x52);
                        if (iVar7 == 0) {
                          if (local_1570 == (long *)0x0) {
                            local_1570 = plVar21;
                          }
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003420b3;
                          local_1530 = FUN_1004eb707(local_1520,plVar21,0,0,0);
                          if ((uint)local_1530 < 4) {
                            if (local_1548 == (long *)0x0) {
                              local_1548 = plVar21;
                            }
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x100342102;
                            cVar6 = FUN_100474a49(local_1568,1,1);
                            plVar5 = local_1548;
                            if (cVar6 == '\0') goto LAB_100342c7a;
                            lVar14 = plVar21[1];
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10034211c;
                            plVar20 = (long *)FUN_1004e7c10(local_1520,lVar14,0);
                            plVar5 = plVar21;
                            if (plVar21 == plVar20) goto LAB_100342c7a;
                          }
                        }
                      }
                      plVar21 = (long *)*plVar21;
                    } while (plVar21 != (long *)0x0);
                    plVar5 = local_1548;
                    if (local_1548 != (long *)0x0) {
LAB_100342c7a:
                      local_1548 = plVar5;
                      cVar6 = '\x10';
                      if ((int)local_1530 == 3) {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10034313c;
                        lVar14 = FUN_100166b7f(lVar15,&cf_Variant);
                        if (lVar14 != 0) {
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100343152;
                          cVar6 = FUN_100167dd2(lVar14,&cf_TransferUnzipped,0);
                          cVar6 = (cVar6 != '\0') * '\b' + '\x10';
                        }
                      }
                      else if ((int)local_1530 == 1) {
                        cVar6 = '\x11';
                      }
                      uVar27 = *(undefined4 *)(local_1520 + 0x28);
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100343185;
                      iVar10 = FUN_1004058aa(local_1548,cVar6,uVar25,FUN_100345905,uVar27);
                      if (iVar10 == 0) {
                        uVar25 = *local_1528;
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100343278;
                        uVar16 = FUN_100165701(DAT_1008c4d90,uVar25);
                        uVar13 = *(undefined8 *)(local_1520 + 0x167f0);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100343294;
                        FUN_100171502(uVar13,uVar16,lVar15);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10034329c;
                        FUN_10017060f(uVar16);
LAB_10034359b:
                        uVar11 = 0;
                        iVar7 = 0;
                      }
                      else {
                        if (DAT_1008c75c0 != -1) {
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100343fd0;
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar25 = DAT_1008c75b8;
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x1003431b9;
                        cVar6 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                        if (cVar6 != '\0') {
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003431cc;
                          FUN_1001b8dfc(local_a78,&local_1518);
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003431d4;
                          local_64a = (char *)FUN_1001b83ae(local_a78);
                          local_658 = 0x8000302;
                          local_64c = 0x822;
                          local_642 = 0x400;
                          local_640 = CONCAT44(local_640._4_4_,iVar10);
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10034322d;
                          local_654 = pcVar22;
                          __os_log_impl(0x100000000,uVar25,0x10,
                                        "airtraffic> failed to copy track %lld (\"%{public}s\") (%d)"
                                        ,&local_658);
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100343235;
                          FUN_1001b7a50(local_a78);
                        }
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10034323d;
                        iVar7 = FUN_10032f3b4(iVar10);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10034325a;
                        uVar11 = FUN_1003471b5(local_1520,local_1548,0,0,iVar10);
                      }
                      goto LAB_100342ad6;
                    }
                  }
                  if (DAT_1008c75c0 != -1) {
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100343ea0;
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar19 = local_1530;
                  uVar25 = DAT_1008c75b8;
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100342cfe;
                  cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar6 != '\0') {
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100342d15;
                    FUN_1001b8dfc(local_a78,&local_1518);
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100342d24;
                    pcVar17 = (char *)FUN_1001b83ae(local_a78);
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100342d33;
                    local_640 = FUN_10035f712(local_1530);
                    local_658 = 0x8000302;
                    local_64c = 0x822;
                    local_642 = 0x822;
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100342d8c;
                    local_654 = pcVar22;
                    local_64a = pcVar17;
                    __os_log_impl(0x100000000,uVar25,1,
                                  "airtraffic> cannot accept track %lld (\"%{public}s\") (%{public}s)"
                                  ,&local_658);
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100342d94;
                    FUN_1001b7a50(local_a78);
                    uVar19 = local_1530;
                  }
                  plVar21 = local_1570;
                  if (local_1570 == (long *)0x0) {
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100342dba;
                    plVar21 = (long *)FUN_100597c13(local_1568,local_1540);
                    uVar19 = local_1530;
                  }
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100342dd3;
                  uVar11 = FUN_1003464d8(local_1520,plVar21,uVar19 & 0xffffffff);
                  iVar10 = (int)local_1530;
                  if (iVar10 < 0x13) {
                    if (iVar10 - 8U < 2) {
LAB_100342df2:
                      iVar7 = 6;
                    }
                    else {
                      iVar7 = 4;
                      if (iVar10 != 0x12) goto LAB_100343122;
                    }
                  }
                  else if (iVar10 == 0x1b) {
LAB_10034339d:
                    iVar7 = 0xe;
                  }
                  else {
                    if (iVar10 != 0x13) goto LAB_100343122;
LAB_100342ea7:
                    iVar7 = 5;
                  }
                  goto LAB_100342ad6;
                }
                if (DAT_1008c75c0 != -1) {
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100343e2f;
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar25 = DAT_1008c75b8;
                puVar23 = local_a78;
                *(undefined8 *)((long)&local_38 + lVar12) = 0x100342a5a;
                cVar6 = _os_log_type_enabled(DAT_1008c75b8);
                iVar7 = 3;
                if (cVar6 != '\0') {
                  pcVar17 = (char *)local_1528[0x31];
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100342a7a;
                  FUN_100476ac1(puVar23);
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100342a82;
                  local_64a = (char *)FUN_1001b83ae(puVar23);
                  local_658 = 0x8000202;
                  local_64c = 0x822;
                  pcVar22 = 
                  "airtraffic> could not find source track 0x%016llX for device track \"%{public}s\""
                  ;
                  puVar26 = &local_658;
                  local_654 = pcVar17;
                  goto LAB_100342ac0;
                }
              }
            }
          }
          break;
        case 3:
          pcVar22 = (char *)CONCAT44(uStack_154c,local_1550);
          local_a78[0] = 0;
          *(undefined8 *)((long)&local_38 + lVar12) = 0x100341757;
          pcVar17 = (char *)FUN_100166c1b(lVar15,&cf_AssetID);
          if (pcVar17 == (char *)0x0) {
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341d4b;
            uVar13 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341d5b;
            cVar6 = _os_log_type_enabled(uVar13);
            if (cVar6 != '\0') {
              local_1518 = 0x8220202;
              uStack_1514 = 0x7a0a90;
              uStack_1510 = 1;
              local_150c = 0x822;
              local_150a = "assetIdentifier != nullptr";
              *(undefined8 *)((long)&local_38 + lVar12) = 0x100342899;
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_1518);
            }
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341d6c;
            FUN_1001782e9(0);
            iVar7 = 0xf;
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341772;
            lVar14 = FUN_100166b7f(lVar15,&cf_Variant);
            if (lVar14 != 0) {
              *(undefined8 *)((long)&local_38 + lVar12) = 0x100341794;
              cVar6 = FUN_100167740(lVar14,&cf_AssetParts,local_a78);
              if (cVar6 != '\0') {
                iVar7 = 3;
                if ((local_a78[0] & 2) == 0) break;
                uVar13 = *(undefined8 *)(local_1520 + 0x30);
                *(undefined8 *)((long)&local_38 + lVar12) = 0x1003417c2;
                lVar18 = FUN_1003473f7(uVar13,pcVar22);
                if (lVar18 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100342498;
                  uVar13 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x1003424a8;
                  cVar6 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar6 != '\0') {
                    local_658 = 0x8220202;
                    local_654 = "Assertion failure";
                    local_64c = 0x822;
                    local_64a = "playlistForArtwork != nullptr";
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10034310e;
                    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                        &local_658);
                  }
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x1003424b9;
                  FUN_1001782e9(0,0);
                  if (DAT_1008c75c0 != -1) {
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100343b6d;
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar25 = DAT_1008c75b8;
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x1003424db;
                  cVar6 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                  if (cVar6 != '\0') {
                    local_658 = 0x8000100;
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100342518;
                    local_654 = pcVar22;
                    __os_log_impl(0x100000000,uVar25,0x10,
                                  "airtraffic> could not find playlist id %lld",&local_658);
                  }
                  iVar7 = 0x10;
LAB_1003427b9:
                  local_a78[0] = local_a78[0] & 0xfffffffd;
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x1003427d9;
                  FUN_100168746(lVar14,&cf_AssetParts,local_a78[0],0);
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x1003417da;
                  FUN_1004870ae(lVar18,&local_1518);
                  uVar13 = *(undefined8 *)(local_1520 + 0x30);
                  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar12) = 0;
                  *(code **)(&stack0xffffffffffffffd8 + lVar12) = FUN_100347b55;
                  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar12) = 0;
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x10034181d;
                  iVar7 = FUN_100406f46(uVar13,0x61727477,pcVar17,&local_1518,0x40000);
                  if (iVar7 == -0x80) {
LAB_10034274b:
                    if (DAT_1008c75c0 != -1) {
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100343b55;
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    uVar25 = DAT_1008c75b8;
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10034276d;
                    cVar6 = _os_log_type_enabled(DAT_1008c75b8);
                    if (cVar6 != '\0') {
                      local_658 = 0x8420102;
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x1003427aa;
                      local_654 = pcVar17;
                      __os_log_impl(0x100000000,uVar25,0x10,
                                    "airtraffic> failed to queue promised artwork data for playlist asset identifier \"%{public}@\""
                                    ,&local_658);
                    }
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x1003427b2;
                    iVar7 = FUN_10032f3b4(iVar7);
                    if (iVar7 != 0) goto LAB_1003427b9;
                  }
                  else {
                    if (iVar7 != 0) {
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100342733;
                      uVar13 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100342743;
                      cVar6 = _os_log_type_enabled(uVar13,0x10);
                      if (cVar6 != '\0') {
                        local_658 = 0x8220202;
                        local_654 = "Assertion failure";
                        local_64c = 0x400;
                        local_64a = (char *)CONCAT44(local_64a._4_4_,iVar7);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100343329;
                        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",
                                            &local_658);
                      }
                      goto LAB_10034274b;
                    }
                    uVar13 = *(undefined8 *)(local_1520 + 0x167f0);
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10034184b;
                    FUN_1001714de(uVar13,pcVar17,lVar15);
                  }
                  iVar7 = 0;
                }
                break;
              }
            }
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341d1a;
            uVar13 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341d2a;
            cVar6 = _os_log_type_enabled(uVar13);
            if (cVar6 != '\0') {
              local_1518 = 0x8220202;
              uStack_1514 = 0x7a0a90;
              uStack_1510 = 1;
              local_150c = 0x822;
              local_150a = 
              "variantOptionsDict != nullptr && JRCFDictionaryGetUInt32( variantOptionsDict, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"AssetParts\" \"\")), &assetParts )"
              ;
              *(undefined8 *)((long)&local_38 + lVar12) = 0x10034283d;
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_1518);
            }
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100341d3b;
            FUN_1001782e9(0);
LAB_100341d3b:
            iVar7 = 3;
          }
          break;
        case 4:
          *(undefined8 *)((long)&local_38 + lVar12) = 0x10034186f;
          iVar7 = FUN_1003444f3(local_1520,local_1538,local_1550,lVar15,0);
          break;
        case 5:
          *(undefined8 *)((long)&local_38 + lVar12) = 0x100341732;
          iVar7 = FUN_1003449ad(local_1520,local_1538,local_1550,lVar15);
          break;
        case 6:
          *(undefined8 *)((long)&local_38 + lVar12) = 0x10034199c;
          iVar7 = FUN_100344d22(local_1520,local_1538,CONCAT44(uStack_154c,local_1550),lVar15);
          break;
        case 7:
          if (DAT_1008c75c0 != -1) {
            *(undefined8 *)((long)&local_38 + lVar12) = 0x100343626;
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar25 = DAT_1008c75b8;
          *(undefined8 *)((long)&local_38 + lVar12) = 0x1003419c6;
          cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
          iVar7 = 0x10;
          if (cVar6 != '\0') {
            uStack_1514 = 7;
            pcVar22 = "airtraffic> unsupported asset class %u";
LAB_1003419f7:
            local_1518 = 0x4000100;
            uVar13 = 1;
            iVar7 = 0x10;
            goto LAB_100341a04;
          }
          goto LAB_100341a09;
        default:
          if (DAT_1008c75c0 != -1) {
            *(undefined8 *)((long)&local_38 + lVar12) = 0x10034360e;
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar25 = DAT_1008c75b8;
          *(undefined8 *)((long)&local_38 + lVar12) = 0x100341896;
          cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
          iVar7 = 0x10;
          if (cVar6 != '\0') {
            uStack_1514 = uVar9;
            pcVar22 = "airtraffic> unknown asset class %u";
            goto LAB_1003419f7;
          }
LAB_100341a09:
          uVar11 = 0;
          goto LAB_100342adb;
        }
        uVar11 = 0;
LAB_100342ad6:
        if (iVar7 != 0) {
LAB_100342adb:
          *(uint *)(&stack0xffffffffffffffd8 + lVar12) = uVar11 & 0xff;
          *(int *)(&stack0xffffffffffffffd0 + lVar12) = iVar7;
          *(undefined8 *)((long)&local_38 + lVar12) = 0x100342b09;
          FUN_10032f806(local_1520,local_1538,local_1558,0,0,0);
        }
LAB_100342b09:
        *(undefined8 *)((long)&local_38 + lVar12) = 0x100342b11;
        FUN_10017060f(lVar15);
        *(undefined8 *)((long)&local_38 + lVar12) = 0x100342b16;
        FUN_1001b1464();
LAB_100342b16:
        uVar13 = *(undefined8 *)(local_1520 + 0x167e8);
        *(undefined8 *)((long)&local_38 + lVar12) = 0x100342b29;
        lVar14 = FUN_10017076e(uVar13);
        lVar15 = local_1520;
      } while (0 < lVar14);
    }
    *(undefined8 *)((long)&local_38 + lVar12) = 0x10034417f;
    FUN_1004dd69c(lVar15,"");
    *(undefined4 *)(local_1520 + 0x16810) = 0;
    if (*(long *)(local_1520 + 0x30) != 0) {
      psVar2 = (short *)(*(long *)(local_1520 + 0x30) + 0x27b0);
      *psVar2 = *psVar2 + -1;
    }
    if (*(int *)(local_1520 + 0x167d8) == 0) {
      *(undefined1 *)(local_1520 + 0x16849) = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_38 + lVar12) = &UNK_100344295;
    ___stack_chk_fail();
  }
  return;
}

