// name: FUN_1003b4bc4
// address: 1003b4bc4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1003b4bc4(long param_1,byte *param_2,ulong *param_3,byte *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  uint local_498;
  undefined4 uStack_494;
  ushort local_490;
  char local_48d;
  uint local_48c;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 uStack_474;
  ulong local_470;
  undefined4 local_468;
  uint local_464;
  undefined2 local_288;
  undefined2 uStack_286;
  undefined2 uStack_284;
  undefined2 uStack_282;
  undefined4 uStack_280;
  undefined2 local_27c;
  char *local_27a;
  undefined4 local_268;
  char *local_264;
  undefined2 local_25c;
  char *local_25a;
  uint local_68;
  char *local_64;
  undefined2 local_5c;
  char *local_5a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_268 = 0x8220202;
      local_264 = "Assertion failure";
      local_25c = 0x822;
      local_25a = "metaData != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_268,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
    goto LAB_1003b6587;
  }
  if (param_2 != (byte *)0x0) {
    iVar2 = FUN_1001cb213(param_1,0xa96e616d,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *param_2 = *param_2 | 1;
      FUN_1001e1c39(&local_268,param_2 + 8);
    }
    iVar2 = FUN_1001cb213(param_1,0xa9415254,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *param_2 = *param_2 | 4;
      FUN_1001e1c39(&local_268,param_2 + 0x408);
    }
    iVar2 = FUN_1001cb213(param_1,0x61415254,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      param_2[3] = param_2[3] | 0x40;
      FUN_1001e1c39(&local_268,param_2 + 0x1458);
    }
    iVar2 = FUN_1001cb213(param_1,0xa9777274,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      param_2[2] = param_2[2] | 0x20;
      FUN_1001e1c39(&local_268,param_2 + 0x1040);
    }
    iVar2 = FUN_1001cb213(param_1,0xa9616c62,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *param_2 = *param_2 | 8;
      FUN_1001e1c39(&local_268,param_2 + 0x608);
    }
    iVar2 = FUN_1001cb213(param_1,0xa9677270,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      param_2[3] = param_2[3] | 0x10;
      FUN_1001e1c39(&local_268,param_2 + 0x1254);
    }
    iVar2 = FUN_1001cb213(param_1,0xa967656e,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      FUN_1003aad2e(&local_268,1,&local_488);
LAB_1003b4dab:
      if ((short)local_488 != 0) {
        *param_2 = *param_2 | 0x10;
        FUN_1001e1c39(&local_488,param_2 + 0x808);
      }
    }
    else {
      iVar2 = FUN_1001c955b(param_1,0x676e7265,0,0,&local_498);
      if (CONCAT44(uStack_494,local_498) != 0 && iVar2 == 0) {
        iVar2 = FUN_1001cad10(CONCAT44(uStack_494,local_498),1,&local_48d,&local_68,2,&local_48c);
        if ((((iVar2 == 0) && (local_48d == '\0')) && (local_48c == 2)) && ((byte)local_68 == '\0'))
        {
          FUN_1001c34e1(local_68 >> 8 & 0xff | 0x23f00000,&local_488,&DAT_100712030);
          goto LAB_1003b4dab;
        }
      }
    }
    iVar2 = FUN_1001c955b(param_1,0x74726b6e,0,0,&local_498);
    if (CONCAT44(uStack_494,local_498) != 0 && iVar2 == 0) {
      iVar2 = FUN_1001cad10(CONCAT44(uStack_494,local_498),1,&local_48d,&local_288,8,&local_48c);
      if (iVar2 == 0) {
        if (local_48d == '\0') {
          cVar1 = '\0';
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_68 = 0x8220202;
            local_64 = "Assertion failure";
            local_5c = 0x822;
            local_5a = "dataType == kMetaTypeReserved";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
          }
          FUN_1001782e9(0,0);
          cVar1 = local_48d;
        }
        if ((cVar1 == '\0') && (local_48c == 8)) {
          auVar11 = pshufb(ZEXT416(CONCAT22(uStack_284,uStack_286)),_DAT_100747460);
          *(long *)(param_2 + 0x1008) = auVar11._0_8_;
          *param_2 = *param_2 | 0x40;
        }
      }
    }
    iVar2 = FUN_1001c955b(param_1,0x6469736b,0,0,&local_498);
    if (CONCAT44(uStack_494,local_498) != 0 && iVar2 == 0) {
      iVar2 = FUN_1001cad10(CONCAT44(uStack_494,local_498),1,&local_48d,&local_288,6,&local_48c);
      if (iVar2 == 0) {
        if (local_48d == '\0') {
          cVar1 = '\0';
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_68 = 0x8220202;
            local_64 = "Assertion failure";
            local_5c = 0x822;
            local_5a = "dataType == kMetaTypeReserved";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
          }
          FUN_1001782e9(0,0);
          cVar1 = local_48d;
        }
        if ((cVar1 == '\0') && (local_48c == 6)) {
          auVar11 = pshufb(ZEXT416(CONCAT22(uStack_284,uStack_286)),_DAT_100741f00);
          *(int *)(param_2 + 0x1244) = auVar11._0_4_;
          param_2[2] = param_2[2] | 0x80;
        }
      }
    }
    iVar2 = FUN_1001cb213(param_1,0xa9646179,&local_268);
    if ((iVar2 == 0) && (3 < (ushort)local_268)) {
      local_268 = CONCAT22(local_268._2_2_,4);
      FUN_1001e4d4c(&local_268,&local_68,0x20);
      iVar2 = FUN_1001e3338(&local_68);
      if (iVar2 != 0) {
        *param_2 = *param_2 | 0x80;
        *(short *)(param_2 + 0x1010) = (short)iVar2;
      }
    }
    iVar2 = FUN_1001cb213(param_1,0xa9636d74,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      param_2[1] = param_2[1] | 4;
      FUN_1001e1c39(&local_268,param_2 + 0xe08);
    }
    iVar2 = FUN_1001c955b(param_1,0x6370696c,0,0,&local_498);
    if (CONCAT44(uStack_494,local_498) != 0 && iVar2 == 0) {
      iVar2 = FUN_1001cad10(CONCAT44(uStack_494,local_498),1,&local_48d,&local_490,1,&local_48c);
      if (iVar2 == 0) {
        bVar10 = true;
        if (local_48d != '\x15') {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_288 = 0x202;
            uStack_286 = 0x822;
            uStack_284 = 0xa90;
            uStack_282 = 0x7a;
            uStack_280 = 1;
            local_27c = 0x822;
            local_27a = "dataType == kMetaTypeInteger";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_288,0x16);
          }
          FUN_1001782e9(0,0);
          bVar10 = local_48d == '\x15';
        }
        if ((bVar10) && (local_48c == 1)) {
          param_2[0x1240] = (byte)local_490;
          param_2[2] = param_2[2] | 0x40;
        }
      }
    }
    iVar2 = FUN_1001c955b(param_1,0x70676170,0,0,&local_498);
    if (CONCAT44(uStack_494,local_498) != 0 && iVar2 == 0) {
      iVar2 = FUN_1001cad10(CONCAT44(uStack_494,local_498),1,&local_48d,&local_490,1,&local_48c);
      if (iVar2 == 0) {
        bVar10 = true;
        if (local_48d != '\x15') {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_288 = 0x202;
            uStack_286 = 0x822;
            uStack_284 = 0xa90;
            uStack_282 = 0x7a;
            uStack_280 = 1;
            local_27c = 0x822;
            local_27a = "dataType == kMetaTypeInteger";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_288,0x16);
          }
          FUN_1001782e9(0,0);
          bVar10 = local_48d == '\x15';
        }
        if ((bVar10) && (local_48c == 1)) {
          param_2[0x1241] = (byte)local_490;
          param_2[3] = param_2[3] | 0x20;
        }
      }
    }
    iVar2 = FUN_1001c955b(param_1,0x746d706f,0,0,&local_498);
    if (CONCAT44(uStack_494,local_498) != 0 && iVar2 == 0) {
      iVar2 = FUN_1001cad10(CONCAT44(uStack_494,local_498),1,&local_48d,&local_490,2,&local_48c);
      if (iVar2 == 0) {
        bVar10 = true;
        if (local_48d != '\x15') {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_288 = 0x202;
            uStack_286 = 0x822;
            uStack_284 = 0xa90;
            uStack_282 = 0x7a;
            uStack_280 = 1;
            local_27c = 0x822;
            local_27a = "dataType == kMetaTypeInteger";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_288,0x16);
          }
          FUN_1001782e9(0,0);
          bVar10 = local_48d == '\x15';
        }
        if ((bVar10) && (local_48c == 2)) {
          *(ushort *)(param_2 + 0x1250) = local_490 << 8 | local_490 >> 8;
          param_2[3] = param_2[3] | 8;
        }
      }
    }
  }
  if (param_3 != (ulong *)0x0) {
    iVar2 = FUN_1001cb213(param_1,0xa9646179,&local_268);
    if ((iVar2 == 0) && (4 < (ushort)local_268)) {
      FUN_1001e1c39(&local_268,param_3 + 0x159);
      *(byte *)((long)param_3 + 2) = *(byte *)((long)param_3 + 2) | 2;
    }
    iVar2 = FUN_1001c97e8(param_1,0x2d2d2d2d,"com.apple.iTunes",0x10,"iTunNORM",8,&local_288);
    lVar6 = CONCAT26(uStack_282,CONCAT24(uStack_284,CONCAT22(uStack_286,local_288)));
    if (lVar6 != 0 && iVar2 == 0) {
      iVar2 = FUN_1001ca7a7(lVar6,1,&local_490,&local_68);
      if ((0 < (int)local_68 && (byte)local_490 == '\x01') && iVar2 == 0) {
        lVar6 = FUN_1001c63e1(local_68);
        if (lVar6 != 0) {
          iVar2 = FUN_1001cad10(CONCAT26(uStack_282,
                                         CONCAT24(uStack_284,CONCAT22(uStack_286,local_288))),1,
                                &local_490,lVar6,local_68,&local_498);
          if ((iVar2 == 0) && (local_68 == local_498)) {
            iVar2 = FUN_1003a92b4(lVar6,local_68,&local_488);
            if (iVar2 == 0) {
              FUN_1003aae86(&local_488,param_3);
            }
          }
          FUN_1001c64c1(lVar6);
        }
      }
    }
    iVar2 = FUN_1001c97e8(param_1,0x2d2d2d2d,"com.apple.iTunes",0x10,"iTunSMPB",8,&local_288);
    lVar6 = CONCAT26(uStack_282,CONCAT24(uStack_284,CONCAT22(uStack_286,local_288)));
    if (lVar6 != 0 && iVar2 == 0) {
      iVar2 = FUN_1001ca7a7(lVar6,1,&local_490,&local_48c);
      if ((0 < (int)local_48c && (byte)local_490 == '\x01') && iVar2 == 0) {
        lVar6 = FUN_1001c63e1(local_48c);
        if (lVar6 != 0) {
          iVar2 = FUN_1001cad10(CONCAT26(uStack_282,
                                         CONCAT24(uStack_284,CONCAT22(uStack_286,local_288))),1,
                                &local_490,lVar6,local_48c,&local_498);
          uVar4 = local_48c;
          if ((iVar2 == 0) && (local_48c == local_498)) {
            FUN_1001c62d9(&local_488,0x40);
            if (uVar4 == 0x74) {
              FUN_1001c631b(lVar6,&local_68,9);
              local_68._0_1_ = 8;
              local_47c = FUN_1001e0fc3(&local_68);
              FUN_1001c631b(lVar6 + 9,&local_68,9);
              local_68._0_1_ = 8;
              local_478 = FUN_1001e0fc3(&local_68);
              FUN_1001c631b(lVar6 + 0x12,&local_68,9);
              local_68._0_1_ = 8;
              uStack_474 = FUN_1001e0fc3(&local_68);
              FUN_1001c631b(lVar6 + 0x1b,&local_68,0x11);
              local_68._0_1_ = 0x10;
              local_470 = FUN_1001e1030(&local_68);
              FUN_1001c631b(lVar6 + 0x2c,&local_68,9);
              local_68._0_1_ = 8;
              local_468 = FUN_1001e0fc3(&local_68);
              FUN_1001c631b(lVar6 + 0x35,&local_68,9);
              local_68 = CONCAT31(local_68._1_3_,8);
              local_464 = FUN_1001e0fc3(&local_68);
              if (local_470 != 0) {
                *(undefined4 *)((long)param_3 + 0x54) = local_468;
                param_3[0xb] = CONCAT44(uStack_474,local_478);
                param_3[0xc] = local_470;
                param_3[0xd] = (ulong)local_464;
                *(byte *)((long)param_3 + 3) = *(byte *)((long)param_3 + 3) | 0x40;
              }
            }
          }
          FUN_1001c64c1(lVar6);
        }
      }
    }
    iVar2 = FUN_1001cb40c(param_1,0x2d2d2d2d,"com.apple.iTunes",0x10,"iTunEXTC",8,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *(byte *)((long)param_3 + 2) = *(byte *)((long)param_3 + 2) | 4;
      FUN_1001e1c39(&local_268,param_3 + 0x3fd);
    }
    iVar2 = FUN_1001cb213(param_1,0x61704944,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *(byte *)((long)param_3 + 1) = *(byte *)((long)param_3 + 1) | 4;
      FUN_1001e1c39(&local_268,param_3 + 0x19);
    }
    iVar2 = FUN_1001cb213(param_1,0x6f776e72,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *(byte *)(param_3 + 1) = (byte)param_3[1] | 2;
      FUN_1001e1c39(&local_268,param_3 + 0x59);
    }
    iVar2 = FUN_1001cb213(param_1,0x64774944,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *(byte *)((long)param_3 + 1) = *(byte *)((long)param_3 + 1) | 4;
      FUN_1001e1c39(&local_268,param_3 + 0x99);
    }
    iVar2 = FUN_1001cb213(param_1,0x64776c72,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *(byte *)(param_3 + 1) = (byte)param_3[1] | 2;
      FUN_1001e1c39(&local_268,param_3 + 0xd9);
    }
    iVar2 = FUN_1001cb213(param_1,0x63707274,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *(byte *)((long)param_3 + 1) = *(byte *)((long)param_3 + 1) | 0x10;
      FUN_1001e1c39(&local_268,param_3 + 0x119);
    }
    iVar2 = FUN_1001cb82c(param_1,0x636e4944,&local_488,8,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *(byte *)((long)param_3 + 1) = *(byte *)((long)param_3 + 1) | 8;
      *(ulong *)((long)param_3 + 0xccc) =
           CONCAT44(uStack_484,CONCAT22(local_488._2_2_,(short)local_488));
    }
    iVar2 = FUN_1001c955b(param_1,0x72746e67,0,0,&local_288);
    lVar6 = CONCAT26(uStack_282,CONCAT24(uStack_284,CONCAT22(uStack_286,local_288)));
    if (lVar6 != 0 && iVar2 == 0) {
      iVar2 = FUN_1001cad10(lVar6,1,&local_490,&local_68,1,&local_498);
      if (iVar2 == 0) {
        *(byte *)((long)param_3 + 1) = *(byte *)((long)param_3 + 1) | 0x20;
        *(byte *)((long)param_3 + 0x11) = (byte)local_68;
      }
    }
    iVar2 = FUN_1001cb82c(param_1,0x61744944,&local_488,8,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *(byte *)((long)param_3 + 1) = *(byte *)((long)param_3 + 1) | 0x40;
      *(ulong *)((long)param_3 + 0xcd4) =
           CONCAT44(uStack_484,CONCAT22(local_488._2_2_,(short)local_488));
    }
    iVar2 = FUN_1001cb82c(param_1,0x636d4944,&local_488,8,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *(byte *)((long)param_3 + 2) = *(byte *)((long)param_3 + 2) | 0x10;
      *(ulong *)((long)param_3 + 0xcdc) =
           CONCAT44(uStack_484,CONCAT22(local_488._2_2_,(short)local_488));
    }
    iVar2 = FUN_1001cb82c(param_1,0x706c4944,&local_488,8,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *(byte *)((long)param_3 + 1) = *(byte *)((long)param_3 + 1) | 0x80;
      *(ulong *)((long)param_3 + 0xcec) =
           CONCAT44(uStack_484,CONCAT22(local_488._2_2_,(short)local_488));
    }
    iVar2 = FUN_1001cb82c(param_1,0x67654944,&local_488,8,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *(byte *)((long)param_3 + 2) = *(byte *)((long)param_3 + 2) | 1;
      *(ulong *)((long)param_3 + 0xce4) =
           CONCAT44(uStack_484,CONCAT22(local_488._2_2_,(short)local_488));
    }
    iVar2 = FUN_1001cb82c(param_1,0x73664944,&local_488,8,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *(byte *)((long)param_3 + 3) = *(byte *)((long)param_3 + 3) | 2;
      *(ulong *)((long)param_3 + 0xcf4) =
           CONCAT44(uStack_484,CONCAT22(local_488._2_2_,(short)local_488));
    }
    iVar2 = FUN_1001cb213(param_1,0x63617467,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *(byte *)((long)param_3 + 3) = *(byte *)((long)param_3 + 3) | 4;
      FUN_1001e1c39(&local_268,(long)param_3 + 0x15c4);
    }
    iVar2 = FUN_1001cb213(param_1,0x78696420,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *(byte *)((long)param_3 + 7) = *(byte *)((long)param_3 + 7) | 0x40;
      FUN_1001e1c39(&local_268,(long)param_3 + 0xd24);
    }
    iVar2 = FUN_1001cb213(param_1,0x666c7672,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *(byte *)((long)param_3 + 2) = *(byte *)((long)param_3 + 2) | 8;
      FUN_1001e1c39(&local_268,(long)param_3 + 0xf24);
    }
    iVar2 = FUN_1001cb213(param_1,0x64657363,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *(byte *)((long)param_3 + 3) = *(byte *)((long)param_3 + 3) | 8;
      FUN_1001e1c39(&local_268,(long)param_3 + 0x17c4);
    }
    iVar2 = FUN_1001cb82c(param_1,0x68647664,&local_68,1,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *(byte *)((long)param_3 + 7) = *(byte *)((long)param_3 + 7) | 4;
      *(ushort *)((long)param_3 + 0x4c) = (ushort)(byte)local_68;
    }
    iVar2 = FUN_1001cb213(param_1,0x74767368,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *(byte *)((long)param_3 + 4) = *(byte *)((long)param_3 + 4) | 1;
      FUN_1001e1c39(&local_268,(long)param_3 + 0x19c4);
    }
    iVar2 = FUN_1001cb213(param_1,0x7476656e,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *(byte *)((long)param_3 + 4) = *(byte *)((long)param_3 + 4) | 4;
      FUN_1001e1c39(&local_268,(long)param_3 + 0x1bc4);
    }
    iVar2 = FUN_1001cb82c(param_1,0x74766573,(long)param_3 + 0x1dc4,4,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *(byte *)((long)param_3 + 4) = *(byte *)((long)param_3 + 4) | 8;
    }
    iVar2 = FUN_1001cb82c(param_1,0x7476736e,param_3 + 0x3b9,4,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *(byte *)((long)param_3 + 4) = *(byte *)((long)param_3 + 4) | 2;
    }
    iVar2 = FUN_1001cb82c(param_1,0x7374696b,param_3 + 0x1a1,1,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *(byte *)((long)param_3 + 4) = *(byte *)((long)param_3 + 4) | 0x20;
    }
    iVar2 = FUN_1001cb213(param_1,0x70757264,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      uVar3 = FUN_1001e6b97(&local_268);
      *(undefined4 *)((long)param_3 + 0xcfc) = uVar3;
      *(byte *)((long)param_3 + 4) = *(byte *)((long)param_3 + 4) | 0x80;
    }
    iVar2 = FUN_1001cb82c(param_1,0x726e6475,param_3 + 0x1a2,4,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *(byte *)((long)param_3 + 2) = *(byte *)((long)param_3 + 2) | 0x20;
    }
    iVar2 = FUN_1001cb213(param_1,0x726e7364,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      uVar3 = FUN_1001e6b97(&local_268);
      *(undefined4 *)((long)param_3 + 0xd0c) = uVar3;
LAB_1003b5c8b:
      *(byte *)((long)param_3 + 2) = *(byte *)((long)param_3 + 2) | 0x20;
    }
    else {
      iVar2 = FUN_1001cb213(param_1,0x72657864,&local_268);
      if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
        uVar4 = FUN_1001e6b97(&local_268);
        if (0x278d00 < uVar4) {
          *(uint *)((long)param_3 + 0xd0c) = uVar4 - 0x278d00;
          *(undefined4 *)(param_3 + 0x1a2) = 0x278d00;
          goto LAB_1003b5c8b;
        }
      }
    }
    iVar2 = FUN_1001cb213(param_1,0x72707364,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      uVar3 = FUN_1001e6b97(&local_268);
      *(undefined4 *)((long)param_3 + 0xd14) = uVar3;
      *(byte *)((long)param_3 + 2) = *(byte *)((long)param_3 + 2) | 0x20;
    }
    iVar2 = FUN_1001cb82c(param_1,0x72706475,param_3 + 0x1a3,4,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *(byte *)((long)param_3 + 2) = *(byte *)((long)param_3 + 2) | 0x20;
    }
    iVar2 = FUN_1001cb82c(param_1,0x73736e6d,param_3 + 0x5bd,1,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *param_3 = *param_3 | 0x8000000000000;
    }
    iVar2 = FUN_1001cb213(param_1,0x736f6e6d,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *(byte *)((long)param_3 + 5) = *(byte *)((long)param_3 + 5) | 0x20;
      FUN_1001e1c39(&local_268,param_3 + 0x43d);
      if ((*param_3 & 0x8000000000000) == 0) {
        *(undefined1 *)(param_3 + 0x5bd) = 3;
        *param_3 = *param_3 | 0x8000000000000;
      }
    }
    iVar2 = FUN_1001cb82c(param_1,0x7373616c,(long)param_3 + 0x2de9,1,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *param_3 = *param_3 | 0x10000000000000;
    }
    iVar2 = FUN_1001cb213(param_1,0x736f616c,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *(byte *)((long)param_3 + 5) = *(byte *)((long)param_3 + 5) | 0x40;
      FUN_1001e1c39(&local_268,param_3 + 0x47d);
      if ((*param_3 & 0x10000000000000) == 0) {
        *(undefined1 *)((long)param_3 + 0x2de9) = 3;
        *param_3 = *param_3 | 0x10000000000000;
      }
    }
    iVar2 = FUN_1001cb82c(param_1,0x73736172,(long)param_3 + 0x2dea,1,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *param_3 = *param_3 | 0x20000000000000;
    }
    iVar2 = FUN_1001cb213(param_1,0x736f6172,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *(byte *)((long)param_3 + 5) = *(byte *)((long)param_3 + 5) | 0x80;
      FUN_1001e1c39(&local_268,param_3 + 0x4bd);
      if ((*param_3 & 0x20000000000000) == 0) {
        *(undefined1 *)((long)param_3 + 0x2dea) = 3;
        *param_3 = *param_3 | 0x20000000000000;
      }
    }
    iVar2 = FUN_1001cb82c(param_1,0x73736161,(long)param_3 + 0x2deb,1,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *param_3 = *param_3 | 0x40000000000000;
    }
    iVar2 = FUN_1001cb213(param_1,0x736f6161,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *(byte *)((long)param_3 + 6) = *(byte *)((long)param_3 + 6) | 1;
      FUN_1001e1c39(&local_268,param_3 + 0x4fd);
      if ((*param_3 & 0x40000000000000) == 0) {
        *(undefined1 *)((long)param_3 + 0x2deb) = 3;
        *param_3 = *param_3 | 0x40000000000000;
      }
    }
    iVar2 = FUN_1001cb82c(param_1,0x7373636f,(long)param_3 + 0x2dec,1,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *param_3 = *param_3 | 0x80000000000000;
    }
    iVar2 = FUN_1001cb213(param_1,0x736f636f,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *(byte *)((long)param_3 + 6) = *(byte *)((long)param_3 + 6) | 2;
      FUN_1001e1c39(&local_268,param_3 + 0x53d);
      if ((*param_3 & 0x80000000000000) == 0) {
        *(undefined1 *)((long)param_3 + 0x2dec) = 3;
        *param_3 = *param_3 | 0x80000000000000;
      }
    }
    iVar2 = FUN_1001cb82c(param_1,0x7373736e,(long)param_3 + 0x2ded,1,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *param_3 = *param_3 | 0x100000000000000;
    }
    iVar2 = FUN_1001cb213(param_1,0x736f736e,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *(byte *)((long)param_3 + 6) = *(byte *)((long)param_3 + 6) | 4;
      FUN_1001e1c39(&local_268,param_3 + 0x57d);
      if ((*param_3 & 0x100000000000000) == 0) {
        *(undefined1 *)((long)param_3 + 0x2ded) = 3;
        *param_3 = *param_3 | 0x100000000000000;
      }
    }
    iVar2 = FUN_1001cbd9e(param_1,0xa96c7972,&local_498,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      lVar6 = FUN_1001c63e1((long)(int)local_498 + 1);
      if (lVar6 != 0) {
        iVar2 = FUN_1001cbc39(param_1,0xa96c7972,lVar6,local_498,&local_498,&local_48c);
        if ((iVar2 == 0) && ((char)local_48c != '\0')) {
          lVar7 = FUN_1001c63e1((long)(int)local_498 * 2);
          if (lVar7 != 0) {
            FUN_1001e7237(lVar6,(long)(int)local_498,lVar7,(long)(int)local_498,&local_68);
            *(byte *)((long)param_3 + 3) = *(byte *)((long)param_3 + 3) | 0x80;
            uVar3 = FUN_1003ab145(lVar7,local_68);
            *(undefined4 *)((long)param_3 + 0x1fe4) = uVar3;
            FUN_1001c64c1(lVar7);
          }
        }
        FUN_1001c64c1(lVar6);
      }
    }
    iVar2 = FUN_1001cb213(param_1,0xa977726b,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *(byte *)((long)param_3 + 9) = *(byte *)((long)param_3 + 9) | 8;
      FUN_1001e1c39(&local_268,(long)param_3 + 0x2e24);
    }
    iVar2 = FUN_1001cb213(param_1,0xa96d766e,&local_268);
    if ((iVar2 == 0) && ((ushort)local_268 != 0)) {
      *(byte *)((long)param_3 + 9) = *(byte *)((long)param_3 + 9) | 0x10;
      FUN_1001e1c39(&local_268,(long)param_3 + 0x3024);
    }
    iVar2 = FUN_1001cb82c(param_1,0xa96d7669,&local_68,2,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *(undefined2 *)((long)param_3 + 0x3224) = (undefined2)local_68;
      *(byte *)((long)param_3 + 9) = *(byte *)((long)param_3 + 9) | 0x20;
    }
    iVar2 = FUN_1001cb82c(param_1,0xa96d7663,&local_68,2,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *(undefined2 *)((long)param_3 + 0x3226) = (undefined2)local_68;
      *(byte *)((long)param_3 + 9) = *(byte *)((long)param_3 + 9) | 0x20;
    }
    iVar2 = FUN_1001cb82c(param_1,0x7368636d,&local_68,1,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *(bool *)((long)param_3 + 0x2e22) = (byte)local_68 != '\0';
      *(byte *)((long)param_3 + 9) = *(byte *)((long)param_3 + 9) | 4;
    }
    iVar2 = FUN_1001cb82c(param_1,0x7368776d,&local_68,1,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      *(bool *)((long)param_3 + 0x2e23) = (byte)local_68 != '\0';
      *(byte *)((long)param_3 + 9) = *(byte *)((long)param_3 + 9) | 0x40;
    }
  }
  uVar5 = 0;
  uVar9 = 0;
  if (param_4 == (byte *)0x0) goto LAB_1003b6587;
  iVar2 = FUN_1001cbd9e(param_1,0x6c646573,&local_68,&local_48c);
  local_488 = CONCAT22(local_488._2_2_,(short)local_488);
  if ((iVar2 == 0) &&
     (local_488 = CONCAT22(local_488._2_2_,(short)local_488), (char)local_48c != '\0')) {
    lVar6 = FUN_1001c63e1((long)(int)local_68 + 1);
    if (lVar6 != 0) {
      iVar2 = FUN_1001cbc39(param_1,0x6c646573,lVar6,local_68,&local_68,&local_48c);
      local_488 = CONCAT22(local_488._2_2_,(short)local_488);
      if ((iVar2 == 0) &&
         (local_488 = CONCAT22(local_488._2_2_,(short)local_488), (char)local_48c != '\0')) {
        uVar4 = local_68 * 2 + 2;
        local_488 = uVar4;
        uVar8 = FUN_1001c63e1(uVar4);
        *(undefined8 *)(param_4 + 0xc) = uVar8;
        FUN_1001e7237(lVar6,(long)(int)local_68,uVar8,uVar4,&local_488);
        *(undefined2 *)(*(long *)(param_4 + 0xc) + (ulong)local_488 * 2) = 0;
        *param_4 = *param_4 | 1;
      }
      FUN_1001c64c1(lVar6);
      goto LAB_1003b6347;
    }
LAB_1003b6561:
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_25a = "tempUTF8 != __null";
LAB_1003b666a:
      local_25c = 0x822;
      local_264 = "Assertion failure";
      local_268 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_268,0x16);
    }
  }
  else {
LAB_1003b6347:
    iVar2 = FUN_1001cbd9e(param_1,0x73646573,&local_68,&local_48c);
    if ((iVar2 == 0) && ((char)local_48c != '\0')) {
      lVar6 = FUN_1001c63e1((long)(int)local_68 + 1);
      if (lVar6 == 0) goto LAB_1003b6561;
      iVar2 = FUN_1001cbc39(param_1,0x73646573,lVar6,local_68,&local_68,&local_48c);
      if ((iVar2 == 0) && ((char)local_48c != '\0')) {
        uVar4 = local_68 * 2 + 2;
        local_488 = uVar4;
        uVar8 = FUN_1001c63e1(uVar4);
        *(undefined8 *)(param_4 + 0x14) = uVar8;
        FUN_1001e7237(lVar6,(long)(int)local_68,uVar8,uVar4,&local_488);
        *(undefined2 *)(*(long *)(param_4 + 0x14) + (ulong)local_488 * 2) = 0;
        *param_4 = *param_4 | 0x40;
      }
      FUN_1001c64c1(lVar6);
    }
    iVar2 = FUN_1001c97e8(param_1,0x2d2d2d2d,"com.apple.iTunes",0x10,"iTunMOVI",8,&local_488);
    if (CONCAT44(uStack_484,local_488) == 0 || iVar2 != 0) goto LAB_1003b6587;
    iVar2 = FUN_1001ca7a7(CONCAT44(uStack_484,local_488),1,&local_498,&local_288);
    if (((int)CONCAT22(uStack_286,local_288) < 1 || (char)local_498 != '\x01') || iVar2 != 0)
    goto LAB_1003b6587;
    lVar6 = FUN_1001c63e1((ulong)CONCAT22(uStack_286,local_288) + 1);
    *(long *)(param_4 + 0x1c) = lVar6;
    if (lVar6 != 0) {
      iVar2 = FUN_1001cad10(CONCAT44(uStack_484,local_488),1,&local_498,lVar6,
                            CONCAT22(uStack_286,local_288),&local_68);
      uVar5 = uVar9;
      if (iVar2 == 0) {
        *param_4 = *param_4 | 4;
        *(undefined1 *)(*(long *)(param_4 + 0x1c) + (long)(int)local_68) = 0;
      }
      goto LAB_1003b6587;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_25a = "itTrackInfoVar->movieInfo != __null";
      goto LAB_1003b666a;
    }
  }
  FUN_1001782e9(0,0);
  uVar5 = uVar9;
LAB_1003b6587:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

