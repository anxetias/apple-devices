// name: FUN_1001414c4
// address: 1001414c4

undefined8 FUN_1001414c4(undefined8 param_1,long *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  long *plVar14;
  undefined8 in_stack_fffffffffffffec8;
  undefined1 local_128 [16];
  undefined1 local_118 [8];
  undefined1 local_110 [16];
  undefined ***local_100;
  long local_f8;
  undefined1 local_f0 [8];
  undefined **local_e8;
  undefined ****local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  long *local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  long local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined2 uStack_58;
  undefined2 local_56;
  undefined1 local_54 [28];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_c0 = param_1;
  std::mutex::lock();
  if (param_2[3] == 0) {
    FUN_10015095e(&local_68);
    lVar10 = FUN_100150dd2(&local_68);
    param_2[6] = lVar10;
    FUN_100150de8(&local_68);
  }
  else {
    param_2[6] = param_2[3];
  }
  std::mutex::unlock();
  local_b8 = param_2;
  (**(code **)(*param_2 + 200))(local_128,param_2);
  cVar1 = FUN_1001b8428(local_128);
  if (cVar1 != '\0') {
    FUN_10032f0f2(&local_68);
    FUN_1001b7b04(&local_100,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
    FUN_1001b7b04(&local_e8,"Request has no URL.");
    FUN_1001b7a44(local_d0);
    FUN_1001b7a44(local_78);
    FUN_1001aa318(local_a0);
    FUN_1001aaaac(local_88,&local_100,0x1d52,&local_e8,local_d0,local_78,local_a0);
    FUN_100147f90(local_c0,&local_68,local_88);
    FUN_1001aaad2(local_88);
    FUN_1001aaad2(local_a0);
    FUN_1001b7a50(local_78);
    FUN_1001b7a50(local_d0);
    FUN_1001b7a50(&local_e8);
    FUN_1001b7a50(&local_100);
    FUN_1001ac986(&local_68);
    goto LAB_10014350d;
  }
  FUN_1001b7b04(&local_68,"bag://");
  cVar1 = FUN_1001ba114(local_128,&local_68,0x1b1);
  FUN_1001b7a50(&local_68);
  uVar4 = (undefined4)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  if (cVar1 != '\0') {
    FUN_1001b7a5c(local_78,local_128);
    FUN_1001a7a9e(local_a0,local_b8 + 8);
    FUN_1001b7b04(&local_68,"/");
    FUN_1001bb052(&local_e8,local_128,&local_68);
    FUN_1001b7a50(&local_68);
    local_60._0_4_ = 0;
    local_60._4_2_ = 0;
    local_60._6_2_ = 0;
    local_68 = &local_e8;
    FUN_1001aa318(&uStack_58);
    local_f8 = FUN_1001a7bfa(&local_e8);
    local_100 = &local_e8;
    FUN_1001aa318();
    uVar4 = (undefined4)((ulong)in_stack_fffffffffffffec8 >> 0x20);
    lVar10 = CONCAT26(local_60._6_2_,CONCAT24(local_60._4_2_,(undefined4)local_60)) + 2;
    local_60._0_4_ = (undefined4)lVar10;
    local_60._4_2_ = (undefined2)((ulong)lVar10 >> 0x20);
    local_60._6_2_ = (undefined2)((ulong)lVar10 >> 0x30);
    if ((local_68 == local_100) && (lVar10 == local_f8)) {
LAB_1001418dc:
      FUN_1001b7a44(local_88);
    }
    else {
      FUN_100527694(local_d0);
      FUN_1001aaadc(&uStack_58,local_d0);
      FUN_1001ab006(local_d0);
      FUN_1001a7b90(local_b0,&uStack_58);
      FUN_1001a901e(local_110,local_a0,local_b0);
      FUN_1001ab240(local_b0);
      uVar4 = (undefined4)((ulong)in_stack_fffffffffffffec8 >> 0x20);
      lVar10 = CONCAT26(local_60._6_2_,CONCAT24(local_60._4_2_,(undefined4)local_60)) + 1;
      local_60._0_4_ = (undefined4)lVar10;
      local_60._4_2_ = (undefined2)((ulong)lVar10 >> 0x20);
      local_60._6_2_ = (undefined2)((ulong)lVar10 >> 0x30);
      if ((local_68 != local_100) || (lVar10 != local_f8)) {
        do {
          cVar1 = FUN_1001ab2fa(local_110);
          if (cVar1 != '\0') {
            FUN_1001a8fb6(local_d0,local_110);
            FUN_100527694(local_b0,local_68,
                          CONCAT26(local_60._6_2_,CONCAT24(local_60._4_2_,(undefined4)local_60)));
            FUN_1001aaadc(&uStack_58,local_b0);
            FUN_1001ab006(local_b0);
            FUN_1001a7b90(&local_90,&uStack_58);
            FUN_1001a901e(&local_d8,local_d0,&local_90);
            FUN_1001aaadc(local_110,&local_d8);
            FUN_1001ab240(&local_d8);
            FUN_1001ab240(&local_90);
            FUN_1001a8fac(local_d0);
          }
          uVar4 = (undefined4)((ulong)in_stack_fffffffffffffec8 >> 0x20);
          lVar10 = CONCAT26(local_60._6_2_,CONCAT24(local_60._4_2_,(undefined4)local_60)) + 1;
          local_60._0_4_ = (undefined4)lVar10;
          local_60._4_2_ = (undefined2)((ulong)lVar10 >> 0x20);
          local_60._6_2_ = (undefined2)((ulong)lVar10 >> 0x30);
        } while ((local_68 != local_100) || (lVar10 != local_f8));
      }
      cVar1 = FUN_1001ab24a(local_110);
      if (cVar1 == '\0') {
        FUN_1001ab240(local_110);
        goto LAB_1001418dc;
      }
      FUN_1001ab042(local_d0,local_110);
      FUN_1001b7f2a(local_88,local_d0);
      FUN_1001ab006(local_d0);
      FUN_1001ab240(local_110);
    }
    FUN_1001ab006(local_f0);
    FUN_1001ab006(&uStack_58);
    FUN_1001a7a94(&local_e8);
    FUN_1001b80b2(local_128,local_88);
    FUN_1001b7a50(local_88);
    FUN_1001a8fac(local_a0);
    cVar1 = FUN_1001b8428(local_128);
    if (cVar1 != '\0') {
      uVar5 = FUN_1001b8336(local_78);
      FUN_1001bb78a(&local_68,"bag:// URL not found \'%S\'",uVar5);
      FUN_10032f0f2(&local_100);
      FUN_1001b7b04(&local_e8,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
      FUN_1001b7a44(local_d0);
      FUN_1001b7a44(local_88);
      FUN_1001aa318(local_b0);
      FUN_1001aaaac(local_a0,&local_e8,0x1d52,&local_68,local_d0,local_88,local_b0);
      FUN_100147f90(local_c0,&local_100,local_a0);
      FUN_1001aaad2(local_a0);
      FUN_1001aaad2(local_b0);
      FUN_1001b7a50(local_88);
      FUN_1001b7a50(local_d0);
      FUN_1001b7a50(&local_e8);
      FUN_1001ac986(&local_100);
      FUN_1001b7a50(&local_68);
      FUN_1001b7a50(local_78);
      goto LAB_10014350d;
    }
    FUN_1001b7a50(local_78);
  }
  FUN_10056e070(&local_d8,local_128);
  cVar1 = FUN_1001ac56e(&local_d8);
  if (cVar1 == '\0') {
    FUN_1001bb78a(&local_68,"Request URL \'%@\' is not absolute.",local_d8);
    FUN_10032f0f2(&local_100);
    FUN_1001b7b04(&local_e8,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
    FUN_1001b7a44(local_d0);
    FUN_1001b7a44(local_78);
    FUN_1001aa318(local_a0);
    FUN_1001aaaac(local_88,&local_e8,0x1d52,&local_68,local_d0,local_78,local_a0);
    FUN_100147f90(local_c0,&local_100,local_88);
LAB_100141d77:
    FUN_1001aaad2(local_88);
    FUN_1001aaad2(local_a0);
    FUN_1001b7a50(local_78);
    FUN_1001b7a50(local_d0);
    FUN_1001b7a50(&local_e8);
    FUN_1001ac986(&local_100);
    FUN_1001b7a50(&local_68);
    goto LAB_100143501;
  }
  cVar1 = FUN_1001ab57e(&local_d8);
  if (cVar1 == '\0') {
    FUN_1001bb78a(&local_68,"Request URL \'%@\' is not https.",local_d8);
    FUN_10032f0f2(&local_100);
    FUN_1001b7b04(&local_e8,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
    FUN_1001b7a44(local_d0);
    FUN_1001b7a44(local_78);
    FUN_1001aa318(local_a0);
    FUN_1001aaaac(local_88,&local_e8,0x1d52,&local_68,local_d0,local_78,local_a0);
    FUN_100147f90(local_c0,&local_100,local_88);
    goto LAB_100141d77;
  }
  uVar5 = FUN_100135270();
  cVar1 = _os_log_type_enabled(uVar5,0);
  if (cVar1 != '\0') {
    (**(code **)(*local_b8 + 0xd0))(&local_100);
    uVar6 = FUN_1001b83ae(&local_100);
    local_68._0_4_ = 0x8220302;
    local_68._4_4_ = (undefined4)uVar6;
    local_60._0_4_ = (undefined4)((ulong)uVar6 >> 0x20);
    local_60._4_2_ = 0x400;
    local_60._6_2_ = (undefined2)(int)local_b8[0x31];
    uStack_58 = (undefined2)((uint)(int)local_b8[0x31] >> 0x10);
    local_56 = 0x842;
    local_54._0_8_ = local_d8;
    __os_log_impl(0x100000000,uVar5,0,"storereq> %{public}s(%d). URL is \'%{public}@\'",&local_68,
                  0x1c);
    FUN_1001b7a50(&local_100);
  }
  FUN_1001aa318(&local_90);
  FUN_10014aa76(&local_68,&local_d8);
  FUN_100140e0a(local_b8,&local_d8,&local_68,&local_90);
  if (local_90 != 0) {
    FUN_10032f0f2(&local_100);
    FUN_1001b7b04(&local_e8,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
    FUN_1001b7b04(local_d0,"AddParameters() returned error.");
    FUN_1001aa836(local_78,&local_e8,0x1d52,local_d0,&local_90);
    FUN_100147f90(local_c0,&local_100,local_78);
    FUN_1001aaad2(local_78);
    FUN_1001b7a50(local_d0);
    FUN_1001b7a50(&local_e8);
    FUN_1001ac986(&local_100);
    local_100 = (undefined ***)&local_60;
    local_68._0_4_ = 0x83aef0;
    local_68._4_4_ = 1;
    FUN_100147e82(&local_100);
    goto LAB_1001434f5;
  }
  FUN_1001abd32(&local_d8,&local_60);
  local_68._0_4_ = 0x83aef0;
  local_68._4_4_ = 1;
  local_100 = (undefined ***)&local_60;
  FUN_100147e82();
  uVar2 = (**(code **)(*local_b8 + 0x80))();
  FUN_10014141c(&local_68,uVar2);
  uVar2 = (**(code **)(*local_b8 + 0x78))();
  FUN_1001ac960(0,&local_100,&local_d8,&local_68,1,uVar2,&local_d8,CONCAT44(uVar4,1));
  FUN_1001b7a50(&local_68);
  if (local_100 == (undefined ***)0x0) {
    FUN_10032f0f2(&local_68);
    FUN_1001b7b04(&local_e8,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
    FUN_1001b7b04(local_d0,"Could not create URL request with URL. URL may be invalid.");
    FUN_1001b7a44(local_78);
    FUN_1001b7a44(local_88);
    FUN_1001aa318(local_b0);
    FUN_1001aaaac(local_a0,&local_e8,0x1d52,local_d0,local_78,local_88,local_b0);
    FUN_100147f90(local_c0,&local_68,local_a0);
    FUN_1001aaad2(local_a0);
    FUN_1001aaad2(local_b0);
    FUN_1001b7a50(local_88);
    FUN_1001b7a50(local_78);
    FUN_1001b7a50(local_d0);
    FUN_1001b7a50(&local_e8);
    FUN_1001ac986(&local_68);
    goto LAB_1001434e9;
  }
  local_e8 = &PTR_FUN_10083a7f0;
  local_e0 = &local_100;
  FUN_10032f0f2(local_d0);
  iVar3 = (**(code **)(*local_b8 + 0x80))();
  if ((((iVar3 != 0) && (iVar3 = (**(code **)(*local_b8 + 0x80))(), iVar3 != 2)) &&
      (iVar3 = (**(code **)(*local_b8 + 0x80))(), iVar3 != 3)) &&
     (iVar3 = (**(code **)(*local_b8 + 0x80))(), iVar3 != 4)) {
switchD_100141f07_default:
    iVar3 = (**(code **)(*local_b8 + 0x80))();
    if ((((iVar3 == 0) || (iVar3 = (**(code **)(*local_b8 + 0x80))(), iVar3 == 2)) ||
        ((iVar3 = (**(code **)(*local_b8 + 0x80))(), iVar3 == 3 ||
         (iVar3 = (**(code **)(*local_b8 + 0x80))(), iVar3 == 4)))) &&
       (iVar3 = (**(code **)(*local_b8 + 0x90))(), iVar3 == 1)) {
      FUN_1001a8802(&local_68,local_d0);
      uVar7 = FUN_1001a8610(&local_68);
      uVar8 = FUN_1001a8610(local_d0);
      if (uVar7 < uVar8) {
        FUN_1001a7ad8(local_d0,&local_68);
        FUN_1001b7eb0(local_78,PTR_cf_Content_Encoding_10083c4c8);
        FUN_1001b7b04(local_88,"gzip");
        FUN_1001aca38(local_e0,local_78,local_88);
        FUN_1001b7a50(local_88);
        FUN_1001b7a50(local_78);
      }
      FUN_1001a85d4(&local_68);
    }
    FUN_10013f7c4(local_b8,&local_e8,&local_d8,local_d0);
    FUN_1001ac990(&local_100,local_d0);
    FUN_1001acca0(&local_100,0);
    cVar1 = FUN_10013dc3c();
    if (cVar1 != '\0') {
      pvVar9 = operator_new(0x10,(nothrow_t *)PTR_nothrow_10082c970);
      if (pvVar9 != (void *)0x0) {
        FUN_10013defe(pvVar9,&local_100);
      }
      plVar14 = local_b8 + 0x2c;
      FUN_100144042(plVar14,pvVar9);
      FUN_10013df56(&local_68,*plVar14);
      FUN_1001acb5e(local_e0,&local_68);
      FUN_1001a8fac(&local_68);
    }
    FUN_1001aa318(&local_68);
    FUN_1001482f4(local_c0,&local_100,&local_68);
    FUN_1001aaad2(&local_68);
    goto LAB_1001434dd;
  }
  uVar4 = (**(code **)(*local_b8 + 0x88))();
  switch(uVar4) {
  case 0:
    (**(code **)(*local_b8 + 0x100))(&local_68,local_b8,&local_90);
    FUN_1001a7b1c(local_d0,&local_68);
    FUN_1001a85d4(&local_68);
    if (local_90 == 0) goto switchD_100141f07_default;
    FUN_10032f0f2(&local_68);
    FUN_1001b7b04(local_78,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
    FUN_1001b7b04(local_88,"GetPreformattedRequestBody() returned error.");
    FUN_1001aa836(local_a0,local_78,0x1d52,local_88,&local_90);
    FUN_100147f90(local_c0,&local_68,local_a0);
    goto LAB_100142438;
  case 1:
    FUN_10014ad9e(&local_68);
    cVar1 = FUN_100140f14(local_b8,&local_d8,&local_68,&local_90);
    if (local_90 == 0) {
      if (cVar1 == '\0') {
        (**(code **)(*local_b8 + 0x100))(local_78,local_b8,&local_90);
        FUN_1001a7b1c(local_d0,local_78);
        FUN_1001a85d4(local_78);
        if (local_90 != 0) {
          FUN_10032f0f2(local_78);
          FUN_1001b7b04(local_88,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
          FUN_1001b7b04(local_a0,"GetPreformattedRequestBody() returned error.");
          FUN_1001aa836(local_b0,local_88,0x1d52,local_a0,&local_90);
          FUN_100147f90(local_c0,local_78,local_b0);
          goto LAB_1001424e7;
        }
        FUN_1001b7eb0(local_78,PTR_cf_Content_Type_10083c4d8);
        FUN_1001b7b04(local_88,"multipart/form-data");
        FUN_1001aca38(local_e0,local_78,local_88);
        puVar11 = local_88;
      }
      else {
        FUN_10014b53e(local_78,&local_68);
        FUN_1001a7b1c(local_d0,local_78);
        FUN_1001a85d4(local_78);
        FUN_1001b7eb0(local_78,PTR_cf_Content_Type_10083c4d8);
        FUN_1001b7b04(local_b0,"multipart/form-data");
        FUN_1001b7b04(local_110,"; boundary=");
        FUN_100140dd2(local_a0,local_b0,local_110);
        FUN_100140dd2(local_88,local_a0,&local_60);
        FUN_1001aca38(local_e0,local_78,local_88);
        FUN_1001b7a50(local_88);
        FUN_1001b7a50(local_a0);
        FUN_1001b7a50(local_110);
        puVar11 = local_b0;
      }
      FUN_1001b7a50(puVar11);
      FUN_1001b7a50(local_78);
      local_68._0_4_ = 0x83af20;
      local_68._4_4_ = 1;
      FUN_1001a85d4();
      puVar12 = &local_60;
LAB_1001432a8:
      FUN_1001b7a50(puVar12);
      goto switchD_100141f07_default;
    }
    FUN_10032f0f2(local_78);
    FUN_1001b7b04(local_88,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
    FUN_1001b7b04(local_a0,"AddParameters() returned error.");
    FUN_1001aa836(local_b0,local_88,0x1d52,local_a0,&local_90);
    FUN_100147f90(local_c0,local_78,local_b0);
LAB_1001424e7:
    FUN_1001aaad2(local_b0);
    FUN_1001b7a50(local_a0);
    FUN_1001b7a50(local_88);
    FUN_1001ac986(local_78);
    local_68._0_4_ = 0x83af20;
    local_68._4_4_ = 1;
    FUN_1001a85d4();
    FUN_1001b7a50(&local_60);
    break;
  case 2:
    ppuVar13 = &PTR_FUN_10083a848;
    local_68._0_4_ = 0x83a848;
    local_68._4_4_ = 1;
    FUN_10032f0f2(&local_60);
    cVar1 = FUN_100140f14(local_b8,&local_d8,&local_68,&local_90);
    if (local_90 == 0) {
      if (cVar1 == '\0') {
        (**(code **)(*local_b8 + 0x100))(local_78,local_b8,&local_90);
      }
      else {
        FUN_1001a99b0(local_78,&local_60);
      }
      FUN_1001a7b1c(local_d0,local_78);
      FUN_1001a85d4(local_78);
      if (local_90 == 0) {
        FUN_1001b7eb0(local_78,PTR_cf_Content_Type_10083c4d8);
        FUN_1001b7b04(local_88,"application/x-apple-plist");
        FUN_1001aca38(local_e0,local_78,local_88);
LAB_1001432e6:
        FUN_1001b7a50(local_88);
        FUN_1001b7a50(local_78);
        local_68._0_4_ = SUB84(ppuVar13,0);
        local_68._4_4_ = (undefined4)((ulong)ppuVar13 >> 0x20);
        FUN_1001a8fac(&local_60);
        goto switchD_100141f07_default;
      }
      FUN_10032f0f2(local_78);
      FUN_1001b7b04(local_88,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
      FUN_1001b7b04(local_a0,"GetPreformattedRequestBody() returned error.");
      FUN_1001aa836(local_b0,local_88,0x1d52,local_a0,&local_90);
      FUN_100147f90(local_c0,local_78,local_b0);
    }
    else {
      FUN_10032f0f2(local_78);
      FUN_1001b7b04(local_88,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
      FUN_1001b7b04(local_a0,"AddParameters() returned error.");
      FUN_1001aa836(local_b0,local_88,0x1d52,local_a0,&local_90);
      FUN_100147f90(local_c0,local_78,local_b0);
    }
    goto LAB_1001431b1;
  case 3:
    ppuVar13 = &PTR_FUN_10083a8b0;
    local_68._0_4_ = 0x83a8b0;
    local_68._4_4_ = 1;
    FUN_10032f0f2(&local_60);
    cVar1 = FUN_100140f14(local_b8,&local_d8,&local_68,&local_90);
    if (local_90 == 0) {
      if (cVar1 == '\0') {
        (**(code **)(*local_b8 + 0x100))(local_78,local_b8,&local_90);
      }
      else {
        FUN_1001a99e8(local_78,&local_60);
      }
      FUN_1001a7b1c(local_d0,local_78);
      FUN_1001a85d4(local_78);
      if (local_90 == 0) {
        FUN_1001b7eb0(local_78,PTR_cf_Content_Type_10083c4d8);
        FUN_1001b7b04(local_88,"application/x-apple-plist");
        FUN_1001aca38(local_e0,local_78,local_88);
        goto LAB_1001432e6;
      }
      FUN_10032f0f2(local_78);
      FUN_1001b7b04(local_88,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
      FUN_1001b7b04(local_a0,"GetPreformattedRequestBody() returned error.");
      FUN_1001aa836(local_b0,local_88,0x1d52,local_a0,&local_90);
      FUN_100147f90(local_c0,local_78,local_b0);
    }
    else {
      FUN_10032f0f2(local_78);
      FUN_1001b7b04(local_88,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
      FUN_1001b7b04(local_a0,"AddParameters() returned error.");
      FUN_1001aa836(local_b0,local_88,0x1d52,local_a0,&local_90);
      FUN_100147f90(local_c0,local_78,local_b0);
    }
    goto LAB_1001431b1;
  case 4:
    FUN_10014b906(&local_68);
    cVar1 = FUN_100140f14(local_b8,&local_d8,&local_68,&local_90);
    if (local_90 == 0) {
      if (cVar1 == '\0') {
        (**(code **)(*local_b8 + 0x100))(local_78,local_b8,&local_90);
        FUN_1001a7b1c(local_d0,local_78);
        FUN_1001a85d4(local_78);
        if (local_90 != 0) {
          FUN_10032f0f2(local_78);
          FUN_1001b7b04(local_88,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
          FUN_1001b7b04(local_a0,"GetPreformattedRequestBody() returned error.");
          FUN_1001aa836(local_b0,local_88,0x1d52,local_a0,&local_90);
          FUN_100147f90(local_c0,local_78,local_b0);
          goto LAB_100142136;
        }
        FUN_1001b7eb0(local_78,PTR_cf_Content_Type_10083c4d8);
        FUN_1001b7b04(local_88,"multipart/form-data");
        FUN_1001aca38(local_e0,local_78,local_88);
        puVar11 = local_88;
      }
      else {
        FUN_10014b910(local_78,&local_68);
        FUN_1001a7b1c(local_d0,local_78);
        FUN_1001a85d4(local_78);
        FUN_1001b7eb0(local_78,PTR_cf_Content_Type_10083c4d8);
        FUN_1001b7b04(local_b0,"multipart/form-data");
        FUN_1001b7b04(local_110,"; boundary=");
        FUN_100140dd2(local_a0,local_b0,local_110);
        FUN_100140dd2(local_88,local_a0,local_54 + 4);
        FUN_1001aca38(local_e0,local_78,local_88);
        FUN_1001b7a50(local_88);
        FUN_1001b7a50(local_a0);
        FUN_1001b7a50(local_110);
        puVar11 = local_b0;
      }
      FUN_1001b7a50(puVar11);
      FUN_1001b7a50(local_78);
      FUN_100143f9e(&local_68);
      goto switchD_100141f07_default;
    }
    FUN_10032f0f2(local_78);
    FUN_1001b7b04(local_88,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
    FUN_1001b7b04(local_a0,"AddParameters() returned error.");
    FUN_1001aa836(local_b0,local_88,0x1d52,local_a0,&local_90);
    FUN_100147f90(local_c0,local_78,local_b0);
LAB_100142136:
    FUN_1001aaad2(local_b0);
    FUN_1001b7a50(local_a0);
    FUN_1001b7a50(local_88);
    FUN_1001ac986(local_78);
    FUN_100143f9e(&local_68);
    break;
  case 5:
    local_68._0_4_ = 0x83b010;
    local_68._4_4_ = 1;
    FUN_10032f0f2(&local_60);
    local_54[4] = 0;
    cVar1 = FUN_100140f14(local_b8,&local_d8,&local_68,&local_90);
    if (local_90 == 0) {
      if (cVar1 == '\0') {
        (**(code **)(*local_b8 + 0x100))(local_78,local_b8,&local_90);
      }
      else {
        FUN_1001a7a9e(local_78,&local_60);
      }
      FUN_1001a7b1c(local_d0,local_78);
      FUN_1001a85d4(local_78);
      if (local_90 == 0) {
        FUN_1001b7eb0(local_78,PTR_cf_Content_Type_10083c4d8);
        FUN_1001b7b04(local_88,"application/x-www-form-urlencoded");
        FUN_1001aca38(local_e0,local_78,local_88);
        FUN_1001b7a50(local_88);
        FUN_1001b7a50(local_78);
        local_68._0_4_ = 0x83b010;
        local_68._4_4_ = 1;
        FUN_1001a85d4(&local_60);
        goto switchD_100141f07_default;
      }
      FUN_10032f0f2(local_78);
      FUN_1001b7b04(local_88,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
      FUN_1001b7b04(local_a0,"GetPreformattedRequestBody() returned error.");
      FUN_1001aa836(local_b0,local_88,0x1d52,local_a0,&local_90);
      FUN_100147f90(local_c0,local_78,local_b0);
    }
    else {
      FUN_10032f0f2(local_78);
      FUN_1001b7b04(local_88,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
      FUN_1001b7b04(local_a0,"AddParameters() returned error.");
      FUN_1001aa836(local_b0,local_88,0x1d52,local_a0,&local_90);
      FUN_100147f90(local_c0,local_78,local_b0);
    }
    FUN_1001aaad2(local_b0);
    FUN_1001b7a50(local_a0);
    FUN_1001b7a50(local_88);
    FUN_1001ac986(local_78);
    local_68._0_4_ = 0x83b010;
    local_68._4_4_ = 1;
    FUN_1001a85d4(&local_60);
    break;
  case 6:
    ppuVar13 = &PTR_FUN_10083afa8;
    local_68._0_4_ = 0x83afa8;
    local_68._4_4_ = 1;
    FUN_10032f0f2(&local_60);
    cVar1 = FUN_100140f14(local_b8,&local_d8,&local_68,&local_90);
    if (local_90 == 0) {
      if (cVar1 == '\0') {
        (**(code **)(*local_b8 + 0x100))(local_78,local_b8,&local_90);
      }
      else {
        FUN_10014ac28(local_78,&local_68);
      }
      FUN_1001a7b1c(local_d0,local_78);
      FUN_1001a85d4(local_78);
      if (local_90 == 0) {
        FUN_1001b7eb0(local_78,PTR_cf_Content_Type_10083c4d8);
        FUN_1001b7b04(local_88,"application/json; charset=utf-8");
        FUN_1001aca38(local_e0,local_78,local_88);
        goto LAB_1001432e6;
      }
      FUN_10032f0f2(local_78);
      FUN_1001b7b04(local_88,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
      FUN_1001b7b04(local_a0,"GetPreformattedRequestBody() returned error.");
      FUN_1001aa836(local_b0,local_88,0x1d52,local_a0,&local_90);
      FUN_100147f90(local_c0,local_78,local_b0);
    }
    else {
      FUN_10032f0f2(local_78);
      FUN_1001b7b04(local_88,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
      FUN_1001b7b04(local_a0,"AddParameters() returned error.");
      FUN_1001aa836(local_b0,local_88,0x1d52,local_a0,&local_90);
      FUN_100147f90(local_c0,local_78,local_b0);
    }
    goto LAB_1001431b1;
  case 7:
    iVar3 = (**(code **)(*local_b8 + 0x80))();
    if (iVar3 == 2) {
      (**(code **)(*local_b8 + 0x100))(&local_68,local_b8,&local_90);
      FUN_1001a7b1c(local_d0,&local_68);
      FUN_1001a85d4(&local_68);
      if (local_90 == 0) {
        FUN_1001b7eb0(&local_68,PTR_cf_Content_Type_10083c4d8);
        FUN_1001b7b04(local_78,"application/x-protobuf");
        FUN_1001aca38(local_e0,&local_68,local_78);
        goto LAB_100142fcc;
      }
      FUN_10032f0f2(&local_68);
      FUN_1001b7b04(local_78,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
      FUN_1001b7b04(local_88,"GetPreformattedRequestBody() returned error.");
      FUN_1001aa836(local_a0,local_78,0x1d52,local_88,&local_90);
      FUN_100147f90(local_c0,&local_68,local_a0);
      goto LAB_100142438;
    }
    FUN_10032f0f2(&local_68);
    FUN_1001b7b04(local_78,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
    FUN_1001b7b04(local_88,"Protobuf requests have to be POST.");
    FUN_1001b7a44(local_a0);
    FUN_1001b7a44(local_b0);
    FUN_1001aa318(local_118);
    FUN_1001aaaac(local_110,local_78,0x1d52,local_88,local_a0,local_b0,local_118);
    FUN_100147f90(local_c0,&local_68,local_110);
LAB_1001428a2:
    FUN_1001aaad2(local_110);
    FUN_1001aaad2(local_118);
    FUN_1001b7a50(local_b0);
    FUN_1001b7a50(local_a0);
    goto LAB_1001428d2;
  case 8:
    iVar3 = (**(code **)(*local_b8 + 0x80))();
    if (iVar3 != 2) {
      FUN_10032f0f2(&local_68);
      FUN_1001b7b04(local_78,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
      FUN_1001b7b04(local_88,"DMAPTagged requests have to be POST.");
      FUN_1001b7a44(local_a0);
      FUN_1001b7a44(local_b0);
      FUN_1001aa318(local_118);
      FUN_1001aaaac(local_110,local_78,0x1d52,local_88,local_a0,local_b0,local_118);
      FUN_100147f90(local_c0,&local_68,local_110);
      goto LAB_1001428a2;
    }
    ppuVar13 = &PTR_FUN_10083afa8;
    local_68._0_4_ = 0x83afa8;
    local_68._4_4_ = 1;
    FUN_10032f0f2(&local_60);
    cVar1 = FUN_100140f14(local_b8,&local_d8,&local_68,&local_90);
    if (local_90 == 0) {
      if (cVar1 == '\0') {
        (**(code **)(*local_b8 + 0x100))(local_78,local_b8,&local_90);
      }
      else {
        FUN_10014ac28(local_78,&local_68);
      }
      FUN_1001a7b1c(local_d0,local_78);
      FUN_1001a85d4(local_78);
      if (local_90 == 0) {
        FUN_1001b7eb0(local_78,PTR_cf_Content_Type_10083c4d8);
        FUN_1001b7b04(local_88,"application/x-dmap-tagged");
        FUN_1001aca38(local_e0,local_78,local_88);
        goto LAB_1001432e6;
      }
      FUN_10032f0f2(local_78);
      FUN_1001b7b04(local_88,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
      FUN_1001b7b04(local_a0,"GetPreformattedRequestBody() returned error.");
      FUN_1001aa836(local_b0,local_88,0x1d52,local_a0,&local_90);
      FUN_100147f90(local_c0,local_78,local_b0);
    }
    else {
      FUN_10032f0f2(local_78);
      FUN_1001b7b04(local_88,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
      FUN_1001b7b04(local_a0,"AddParameters() returned error.");
      FUN_1001aa836(local_b0,local_88,0x1d52,local_a0,&local_90);
      FUN_100147f90(local_c0,local_78,local_b0);
    }
LAB_1001431b1:
    FUN_1001aaad2(local_b0);
    FUN_1001b7a50(local_a0);
    FUN_1001b7a50(local_88);
    FUN_1001ac986(local_78);
    local_68._0_4_ = SUB84(ppuVar13,0);
    local_68._4_4_ = (undefined4)((ulong)ppuVar13 >> 0x20);
    FUN_1001a8fac(&local_60);
    break;
  case 9:
    (**(code **)(*local_b8 + 0x100))(&local_68,local_b8,&local_90);
    FUN_1001a7b1c(local_d0,&local_68);
    FUN_1001a85d4(&local_68);
    if (local_90 == 0) {
      FUN_1001b7eb0(&local_68,PTR_cf_Content_Type_10083c4d8);
      FUN_1001b7b04(local_78,"image/jpeg");
      FUN_1001aca38(local_e0,&local_68,local_78);
LAB_100142fcc:
      FUN_1001b7a50(local_78);
      puVar12 = &local_68;
      goto LAB_1001432a8;
    }
    FUN_10032f0f2(&local_68);
    FUN_1001b7b04(local_78,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
    FUN_1001b7b04(local_88,"GetPreformattedRequestBody() returned error.");
    FUN_1001aa836(local_a0,local_78,0x1d52,local_88,&local_90);
    FUN_100147f90(local_c0,&local_68,local_a0);
LAB_100142438:
    FUN_1001aaad2(local_a0);
LAB_1001428d2:
    FUN_1001b7a50(local_88);
    FUN_1001b7a50(local_78);
    FUN_1001ac986(&local_68);
    break;
  default:
    goto switchD_100141f07_default;
  }
LAB_1001434dd:
  FUN_1001a85d4(local_d0);
LAB_1001434e9:
  FUN_1001ac986(&local_100);
LAB_1001434f5:
  FUN_1001aaad2(&local_90);
LAB_100143501:
  FUN_1001ab3c4(&local_d8);
LAB_10014350d:
  FUN_1001b7a50(local_128);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_c0;
}

