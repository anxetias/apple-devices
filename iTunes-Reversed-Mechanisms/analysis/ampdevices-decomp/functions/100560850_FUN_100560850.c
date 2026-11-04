// name: FUN_100560850
// address: 100560850

long FUN_100560850(ulong param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 extraout_RDX;
  undefined1 *puVar13;
  undefined1 auVar14 [16];
  undefined1 local_7178 [16];
  undefined1 local_7168 [16];
  undefined1 local_7158 [16];
  undefined4 local_7148;
  undefined4 local_7144;
  undefined1 local_7140 [22];
  undefined2 local_712a;
  long local_7128;
  char local_7119;
  undefined1 local_7118 [1056];
  undefined1 local_6cf8 [1056];
  int local_68d8;
  undefined4 uStack_68d4;
  undefined4 uStack_68d0;
  undefined2 local_68cc;
  char *local_68ca;
  undefined1 local_66c8 [26224];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100560868;
  lVar3 = FUN_100108310();
  lVar3 = -lVar3;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)((long)&local_38 + lVar3) = 0x100560889;
  FUN_1001b7a44(local_7158);
  *(undefined8 *)((long)&local_38 + lVar3) = 0x100560891;
  lVar4 = FUN_100425f2b(param_1 & 0xffffffff);
  if (lVar4 == 0) {
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100560c1f;
    uVar6 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100560c27;
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100560c37;
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_68ca = "deviceIdentifier != nullptr";
LAB_100560e03:
      local_68cc = 0x822;
      uStack_68d0 = 1;
      uStack_68d4 = 0x7a0a90;
      local_68d8 = 0x8220202;
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100560e28;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68d8,0x16);
    }
LAB_100560c3f:
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100560c48;
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100560c54;
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar3) = 0x1005608b3;
    iVar2 = FUN_1003870d4(0x2e,1,local_6cf8);
    if (iVar2 != -0x80) {
      if (iVar2 != 0) {
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560c6c;
        uVar6 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560c74;
        local_7128 = _objc_retainAutoreleasedReturnValue(uVar6);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560c88;
        cVar1 = _os_log_type_enabled(local_7128,0x10);
        if (cVar1 != '\0') {
          local_68d8 = 0x8220202;
          uStack_68d4 = 0x7a0a90;
          uStack_68d0 = 1;
          local_68cc = 0x400;
          local_68ca = (char *)CONCAT44(local_68ca._4_4_,iVar2);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1005610b2;
          __os_log_error_impl(0x100000000,local_7128,0x10,"%{public}s: err == (%d)",&local_68d8,0x12
                             );
        }
LAB_100560c93:
        lVar12 = 0;
        lVar11 = 0;
        lVar10 = 0;
        goto LAB_100560c99;
      }
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1005608d4;
      FUN_1001b7eb0(&local_58,lVar4);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1005608e7;
      FUN_1001b7b04(local_7140,".png");
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1005608f7;
      FUN_1001b7a5c(&local_68d8,&local_58);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x10056090a;
      FUN_1001bbcfe(&local_68d8,local_7140);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x10056091d;
      FUN_1001b80b2(local_7158,&local_68d8);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100560929;
      FUN_1001b7a50(&local_68d8);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100560935;
      FUN_1001b7a50(local_7140);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x10056093e;
      FUN_1001b7a50(&local_58);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x10056095d;
      iVar2 = FUN_10017df7e(local_6cf8,local_7158,local_7118,0,0);
      if (iVar2 == 0) {
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560cb7;
        lVar5 = FUN_10016ff43(DAT_1008c4d90,local_7118);
        if (lVar5 != 0) {
          lVar12 = 0;
          lVar11 = 0;
          lVar10 = 0;
          goto LAB_100561014;
        }
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560d5a;
        uVar6 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560d62;
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560d72;
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_68ca = "deviceImageURL != nullptr";
          goto LAB_100560e03;
        }
        goto LAB_100560c3f;
      }
      *(undefined8 *)((long)&local_38 + lVar3) = 0x10056096d;
      lVar5 = FUN_1004de449(param_1 & 0xffffffff);
      if (lVar5 == 0) {
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560cd6;
        uVar6 = FUN_1005e9a2c();
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560ce8;
        iVar2 = FUN_1005e7c6c(uVar6,param_1 & 0xffffffff,&local_68d8);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            puVar13 = local_66c8;
            local_7148 = 0;
            uVar6 = extraout_RDX;
            iVar2 = local_68d8;
            local_7119 = (char)uStack_68d4;
            goto LAB_1005609aa;
          }
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560e32;
          uVar6 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560e3a;
          lVar5 = _objc_retainAutoreleasedReturnValue(uVar6);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560e4a;
          cVar1 = _os_log_type_enabled(lVar5,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1005612a6;
            __os_log_error_impl(0x100000000,lVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
LAB_100560e52:
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560e5b;
          (*(code *)PTR__objc_release_10082c7b0)(lVar5);
        }
LAB_100560fae:
        local_7128 = 0;
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560fbe;
        uVar6 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560fc6;
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560fd6;
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_68d8 = 0x8220202;
          uStack_68d4 = 0x7a0a90;
          uStack_68d0 = 1;
          local_68cc = 0x822;
          local_68ca = "pngData != nullptr";
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100561142;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68d8,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560fe7;
        (*(code *)PTR__objc_release_10082c7b0)(uVar6);
        local_7128 = 0;
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560ffb;
        FUN_1001782e9(0,0);
        lVar12 = 0;
        lVar11 = 0;
        lVar10 = 0;
        lVar5 = 0;
      }
      else {
        iVar2 = *(int *)(lVar5 + 0x66b0);
        uVar6 = *(undefined8 *)(lVar5 + 0x66d8);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x10056098c;
        cVar1 = FUN_1002669ba(uVar6);
        uVar6 = *(undefined8 *)(lVar5 + 0x66d8);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x10056099b;
        auVar14 = FUN_100266cae(uVar6);
        uVar6 = auVar14._8_8_;
        local_7119 = cVar1 != '\0';
        local_7148 = (undefined4)CONCAT71(auVar14._1_7_,auVar14[0] != '\0');
        puVar13 = (undefined1 *)(lVar5 + 0x50);
LAB_1005609aa:
        local_7144 = (undefined4)CONCAT71((int7)((ulong)uVar6 >> 8),1);
        if (((iVar2 != 0x69506164) && (iVar2 != 0x6950686e)) && (iVar2 != 0x69506f74)) {
          local_7144 = 0;
        }
        local_712a = *(undefined2 *)(puVar13 + 0x234);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x1005609fa;
        FUN_1001b7b04(&local_58,puVar13 + 0xf4);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560a05;
        uVar6 = FUN_1001bdcb0(&local_58,0);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560a0d;
        local_7128 = _objc_retainAutoreleasedReturnValue(uVar6);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560a27;
        FUN_1001b7b04(local_7140,puVar13 + 0xb6);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560a35;
        uVar6 = FUN_1001bdcb0(local_7140,0);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560a3d;
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560a53;
        FUN_1001b7b04(local_7178,puVar13 + 699);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560a61;
        uVar7 = FUN_1001bdcb0(local_7178,0);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560a69;
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560a82;
        FUN_1001b7b04(local_7168,puVar13 + 0x2cb);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560a90;
        uVar8 = FUN_1001bdcb0(local_7168,0);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560a98;
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        *(undefined8 *)(&stack0xffffffffffffffe0 + lVar3) = uVar8;
        *(undefined8 *)(&stack0xffffffffffffffd8 + lVar3) = uVar7;
        *(undefined8 *)(&stack0xffffffffffffffd0 + lVar3) = uVar6;
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560ae0;
        uVar9 = _GetNSImageForDeviceProperties
                          (local_7119 == '\0',(undefined1)local_7144,lVar5 != 0,
                           (undefined1)local_7148,local_712a,local_7128);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560ae8;
        lVar5 = _objc_retainAutoreleasedReturnValue(uVar9);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560af4;
        (*(code *)PTR__objc_release_10082c7b0)(uVar8);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560b00;
        FUN_1001b7a50(local_7168);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560b09;
        (*(code *)PTR__objc_release_10082c7b0)(uVar7);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560b15;
        FUN_1001b7a50(local_7178);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560b1e;
        (*(code *)PTR__objc_release_10082c7b0)(uVar6);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560b2a;
        FUN_1001b7a50(local_7140);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560b37;
        (*(code *)PTR__objc_release_10082c7b0)(local_7128);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560b40;
        FUN_1001b7a50(&local_58);
        if (lVar5 == 0) {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560d1e;
          uVar6 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560d26;
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560d36;
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "deviceImage != nullptr";
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100561211;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560d47;
          (*(code *)PTR__objc_release_10082c7b0)(uVar6);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560d50;
          FUN_1001782e9(0,0);
          goto LAB_100560fae;
        }
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560b59;
        uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(lVar5,PTR_s_TIFFRepresentation_10088d740);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560b61;
        lVar10 = _objc_retainAutoreleasedReturnValue(uVar6);
        if (lVar10 == 0) {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560da8;
          uVar6 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560db0;
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560dc0;
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "tiffData != nullptr";
            *(undefined8 *)((long)&local_38 + lVar3) = 0x10056125f;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560dd1;
          (*(code *)PTR__objc_release_10082c7b0)(uVar6);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560dda;
          FUN_1001782e9(0,0);
          goto LAB_100560e52;
        }
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560b84;
        uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSBitmapImageRep_10082d2f8,
                           PTR_s_imageRepWithData__10088d748,lVar10);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560b8c;
        lVar11 = _objc_retainAutoreleasedReturnValue(uVar6);
        if (lVar11 == 0) {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560e65;
          uVar6 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560e6d;
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560e7d;
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_4a = "bitmapImageRep != nullptr";
LAB_1005612cf:
            local_4c = 0x822;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1005612f4;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
LAB_100560e85:
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560e8e;
          (*(code *)PTR__objc_release_10082c7b0)(uVar6);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560e97;
          FUN_1001782e9(0,0);
          local_7128 = 0;
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560bb4;
          uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                            (lVar11,PTR_s_representationUsingType_properti_10088d750,4,
                             PTR____NSDictionary0__struct_10082dff0);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560bbc;
          local_7128 = _objc_retainAutoreleasedReturnValue(uVar6);
          if (local_7128 == 0) {
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100560bd1;
            uVar6 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100560bd9;
            uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100560be9;
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_4a = "pngData != nullptr";
              goto LAB_1005612cf;
            }
            goto LAB_100560e85;
          }
        }
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560eab;
        (*(code *)PTR__objc_release_10082c7b0)(lVar11);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560eb4;
        (*(code *)PTR__objc_release_10082c7b0)(lVar10);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560ebd;
        (*(code *)PTR__objc_release_10082c7b0)(lVar5);
        if (local_7128 == 0) goto LAB_100560fae;
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560ee1;
        lVar10 = FUN_10016ff43(DAT_1008c4d90,local_6cf8);
        uVar6 = DAT_1008c4d90;
        if (lVar10 == 0) {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1005610bc;
          uVar6 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1005610c4;
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1005610d4;
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_68d8 = 0x8220202;
            uStack_68d4 = 0x7a0a90;
            uStack_68d0 = 1;
            local_68cc = 0x822;
            local_68ca = "folderURL != nullptr";
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100561345;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68d8,0x16);
          }
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1005610e5;
          (*(code *)PTR__objc_release_10082c7b0)(uVar6);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1005610f1;
          FUN_1001782e9(0,0);
          goto LAB_100560c93;
        }
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560f03;
        FUN_1001b8d18(&local_68d8,local_7158);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560f17;
        lVar11 = FUN_100174a21(uVar6,lVar10,CONCAT44(uStack_68d4,local_68d8),0);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100560f26;
        FUN_10014d890(&local_68d8);
        if (lVar11 == 0) {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x10056114c;
          uVar6 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100561154;
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100561164;
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_68d8 = 0x8220202;
            uStack_68d4 = 0x7a0a90;
            uStack_68d0 = 1;
            local_68cc = 0x822;
            local_68ca = "fileURL != nullptr";
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100561396;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68d8,0x16);
          }
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100561175;
          (*(code *)PTR__objc_release_10082c7b0)(uVar6);
          lVar12 = 0;
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100561181;
          FUN_1001782e9(0,0);
          lVar11 = 0;
LAB_100560c99:
          lVar5 = 0;
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560f39;
          lVar12 = FUN_100174622(lVar11,0);
          if (lVar12 == 0) {
            *(undefined8 *)((long)&local_38 + lVar3) = 0x10056118e;
            uVar6 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100561196;
            uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1005611a6;
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_68d8 = 0x8220202;
              uStack_68d4 = 0x7a0a90;
              uStack_68d0 = 1;
              local_68cc = 0x822;
              local_68ca = "filePath != nullptr";
              *(undefined8 *)((long)&local_38 + lVar3) = 0x1005613e7;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68d8,0x16
                                 );
            }
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1005611b7;
            (*(code *)PTR__objc_release_10082c7b0)(uVar6);
            lVar12 = 0;
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1005611c3;
            FUN_1001782e9(0,0);
            goto LAB_100560c99;
          }
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560f5e;
          cVar1 = (*(code *)PTR__objc_msgSend_10082c770)
                            (local_7128,PTR_s_writeToFile_atomically__10088d738,lVar12,0);
          if (cVar1 == '\0') {
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100560f67;
            uVar6 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100560f6f;
            uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100560f7f;
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_68d8 = 0x8220202;
              uStack_68d4 = 0x7ab58c;
              uStack_68d0 = 1;
              local_68cc = 0x822;
              local_68ca = 
              "[pngData writeToFile:(__bridge NSString *)filePath atomically:__objc_no]";
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100561438;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68d8,0x16
                                 );
            }
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100560f90;
            (*(code *)PTR__objc_release_10082c7b0)(uVar6);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100560f99;
            cVar1 = FUN_1001782e9(0,0);
            if (cVar1 == '\0') goto LAB_100560c99;
          }
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100560fa9;
          lVar5 = FUN_1001705fc(lVar11);
        }
      }
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100561014;
      (*(code *)PTR__objc_release_10082c7b0)(local_7128);
      goto LAB_100561014;
    }
  }
  lVar12 = 0;
  lVar11 = 0;
  lVar10 = 0;
  lVar5 = 0;
LAB_100561014:
  *(undefined8 *)((long)&local_38 + lVar3) = 0x10056101c;
  FUN_10017060f(lVar12);
  *(undefined8 *)((long)&local_38 + lVar3) = 0x100561024;
  FUN_10017060f(lVar11);
  *(undefined8 *)((long)&local_38 + lVar3) = 0x10056102c;
  FUN_10017060f(lVar10);
  *(undefined8 *)((long)&local_38 + lVar3) = 0x100561034;
  FUN_10017060f(lVar4);
  *(undefined8 *)((long)&local_38 + lVar3) = 0x100561040;
  FUN_1001b7a50(local_7158);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_38 + lVar3) = &UNK_100561442;
    ___stack_chk_fail();
  }
  return lVar5;
}

