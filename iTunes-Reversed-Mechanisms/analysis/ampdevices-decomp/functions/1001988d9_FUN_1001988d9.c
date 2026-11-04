// name: FUN_1001988d9
// address: 1001988d9

ulong FUN_1001988d9(long param_1,long param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  ulong uVar9;
  undefined1 local_290 [16];
  undefined8 local_280;
  long *local_278;
  long *local_270;
  long local_268;
  long local_260;
  long local_258;
  long local_250;
  ulong uStack_248;
  long local_240;
  undefined1 local_238;
  undefined1 local_237 [255];
  long local_138 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_100697715(uVar4);
    }
    FUN_1001782e9(0,0);
switchD_100198930_default:
    uVar9 = 0xffffffce;
    goto LAB_100198a42;
  }
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10069769f(uVar4);
    }
    FUN_1001782e9(0,0);
    goto switchD_100198930_default;
  }
  switch(param_3) {
  case 2:
    lVar5 = FUN_100171426(param_2);
    if (lVar5 < 1) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_1006972f9(uVar4);
      }
      uVar9 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      FUN_1001c62d9(&local_260,0x20);
      FUN_1001ea62b(local_290);
      FUN_1001e0998(local_290,0x10,local_138,0);
      local_260 = FUN_10017343e(DAT_1008c4d90,local_138,0x600);
      if (local_260 == 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_100697629(uVar4);
        }
        FUN_1001782e9(0,0);
LAB_100199178:
        uVar9 = 0xffffffce;
LAB_10019917e:
        lVar5 = 0;
      }
      else {
        local_258 = FUN_100170ea9(DAT_1008c4d90,0);
        if (local_258 == 0) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            FUN_1006975b3(uVar4);
          }
          FUN_1001782e9(0,0);
          goto LAB_100199178;
        }
        if ((param_4 & 4) == 0) {
          FUN_1001714c2(param_2,FUN_10019aa9b,&local_260);
        }
        else {
          uVar4 = FUN_100170651(param_2);
          local_240 = FUN_1001726ca(uVar4,param_2);
          if (local_240 == 0) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              FUN_10069745b(uVar4);
            }
            FUN_1001782e9(0,0);
            goto LAB_100199178;
          }
          local_278 = &local_240;
          local_268 = FUN_1001736b8(DAT_1008c4d90,0,&cf_____Content_Disposition_form_data_name_____,
                                    local_260,&cf_plist);
          if (local_268 == 0) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              FUN_1006973e5(uVar4);
            }
            bVar1 = false;
            FUN_1001782e9(0,0);
            uVar9 = 0xde;
          }
          else {
            local_270 = &local_268;
            lVar5 = FUN_1001737f8(local_268);
            uVar9 = uStack_248;
            if (uStack_248 < (ulong)(lVar5 * 3)) {
              if (local_250 != 0) {
                FUN_1001c64c1();
              }
              uVar9 = lVar5 * 3 + 0xf0;
              local_250 = FUN_1001c63e1(uVar9);
              if (local_250 != 0) goto LAB_100198f4f;
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                FUN_10069736f(uVar4);
              }
              bVar1 = false;
              FUN_1001782e9(0,0);
            }
            else {
LAB_100198f4f:
              uStack_248 = uVar9;
              lVar5 = local_268;
              uVar4 = FUN_1001737f8(local_268);
              FUN_1001739f3(lVar5,0,uVar4,0x8000100,0,0,(undefined4)local_250,(undefined4)uStack_248
                            ,&local_280);
              FUN_1001710c1(local_258,local_250,local_280);
              lVar5 = local_258;
              uVar4 = FUN_100170f3b(local_240);
              uVar7 = FUN_100170ef7(local_240);
              FUN_1001710c1(lVar5,uVar4,uVar7);
              bVar1 = true;
              FUN_1001710c1(local_258,"\r\n",2);
            }
            FUN_10017060f(local_268);
            uVar9 = 0x6f;
          }
          FUN_10017060f(local_240);
          if (!bVar1) break;
        }
        FUN_1001dfb1f("--",&local_238,0xff);
        FUN_1001df0f0(local_138,&local_238);
        FUN_1001df147("--\r\n",&local_238);
        FUN_1001710c1(local_258,local_237,local_238);
        uVar3 = FUN_10019adbe(param_1,local_258,param_4);
        uVar9 = (ulong)uVar3;
        if (uVar3 != 0) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            FUN_1006974d1(uVar9,uVar4);
          }
          goto LAB_10019917e;
        }
        lVar5 = FUN_1001736b8(DAT_1008c4d90,0,&cf_multipart_form_data_boundary___,local_260);
        if (lVar5 == 0) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            FUN_10069753d(uVar4);
          }
          FUN_1001782e9(0,0);
          goto LAB_100199178;
        }
        FUN_100171b23(param_1,&cf_Content_Type,lVar5);
        uVar9 = 0;
      }
      FUN_10017060f(local_260);
      FUN_10017060f(local_258);
      FUN_10017060f(lVar5);
      if (local_250 != 0) {
        FUN_1001c64c1();
      }
    }
    break;
  case 3:
    lVar5 = FUN_10016a0af(DAT_1008c4d90,param_2);
    if (lVar5 == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_100697283(uVar4);
      }
      FUN_1001782e9(0,0);
LAB_100198dd4:
      uVar9 = 0xffffff94;
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_100170ea9(DAT_1008c4d90,0);
      if (lVar6 == 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_10069720d(uVar4);
        }
        FUN_1001782e9(0,0);
        goto LAB_100198dd4;
      }
      FUN_100166357(lVar6,"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n");
      FUN_1001663dc(lVar6,lVar5);
      FUN_100171b23(param_1,&cf_Content_Type,&cf_application_x_apple_plist);
      uVar3 = FUN_10019adbe(param_1,lVar6,param_4);
      if (uVar3 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (ulong)uVar3;
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_1006971a1(uVar9,uVar4);
        }
      }
    }
    FUN_10017060f(lVar6);
    FUN_10017060f(lVar5);
    break;
  case 4:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      pcVar8 = &cf_application_x_apple_plist;
LAB_100198c9a:
      uVar9 = FUN_100199268(param_1,param_2,param_4,pcVar8);
      return uVar9;
    }
    goto LAB_1001991ed;
  case 5:
    lVar5 = FUN_100171426(param_2);
    if (lVar5 < 1) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_100697049(uVar4);
      }
      uVar9 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      lVar5 = FUN_100170ea9(DAT_1008c4d90,0);
      if (lVar5 == 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_10069712b(uVar4);
        }
        FUN_1001782e9(0,0);
        uVar9 = 0xffffffce;
      }
      else {
        FUN_1001714c2(param_2,FUN_10019aeff,lVar5);
        uVar3 = FUN_10019adbe(param_1,lVar5,param_4);
        if (uVar3 == 0) {
          FUN_100171b23(param_1,&cf_Content_Type,&cf_application_x_www_form_urlencoded);
          uVar9 = 0;
        }
        else {
          uVar9 = (ulong)uVar3;
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            FUN_1006970bf(uVar9,uVar4);
          }
        }
      }
      FUN_10017060f(lVar5);
    }
    break;
  case 6:
    local_138[0] = FUN_10016b65f(param_2);
    if (local_138[0] == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_100696fd3(uVar4);
      }
      uVar9 = 0xffffff94;
      FUN_1001782e9(0,0);
    }
    else {
      FUN_100171b23(param_1,&cf_Content_Type,&cf_application_json_charset_utf_8);
      uVar3 = FUN_10019adbe(param_1,local_138[0],param_4);
      uVar9 = (ulong)uVar3;
      if (uVar3 == 0) {
        uVar9 = 0;
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_100696f67(uVar9,uVar4);
        }
      }
    }
    FUN_10019b6d8(local_138);
    break;
  case 7:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      pcVar8 = &cf_application_json_charset_utf_8;
      goto LAB_100198c9a;
    }
    goto LAB_1001991ed;
  case 8:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      pcVar8 = &cf_application_x_protobuf;
      goto LAB_100198c9a;
    }
    goto LAB_1001991ed;
  case 9:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      pcVar8 = (cfstringStruct *)0x0;
      goto LAB_100198c9a;
    }
    goto LAB_1001991ed;
  default:
    goto switchD_100198930_default;
  }
LAB_100198a42:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar9;
  }
LAB_1001991ed:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

