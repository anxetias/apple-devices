// name: FUN_10019aa9b
// address: 10019aa9b

void FUN_10019aa9b(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_50;
  long *local_48;
  long local_40;
  long local_38;
  
  lVar2 = FUN_1001705e9(param_2);
  local_40 = _CFDataGetTypeID();
  if (lVar2 == local_40) {
    lVar3 = FUN_1001736b8(DAT_1008c4d90,0,
                          &
                          cf_____Content_Disposition_form_data_name_____Content_Type_application_octet_stream
                          ,*param_3,param_1);
    local_38 = lVar3;
    if (lVar3 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_100698804(uVar5);
      }
LAB_10019ad49:
      FUN_1001782e9(0,0);
      return;
    }
  }
  else {
    lVar4 = _CFDateGetTypeID();
    if (lVar2 == lVar4) {
      lVar4 = FUN_1001664ee(DAT_1008c4d90,param_2);
      if (lVar4 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_100698718(uVar5);
        }
        goto LAB_10019ad49;
      }
    }
    else {
      lVar4 = _CFDictionaryGetTypeID();
      if (lVar2 == lVar4) {
        lVar4 = FUN_10016a22f(DAT_1008c4d90,param_2);
        if (lVar4 == 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            FUN_10069862c(uVar5);
          }
          goto LAB_10019ad49;
        }
      }
      else {
        lVar4 = _CFArrayGetTypeID();
        if (lVar2 == lVar4) {
          lVar4 = FUN_10016a217(DAT_1008c4d90,param_2);
          if (lVar4 == 0) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              FUN_1006985b6(uVar5);
            }
            goto LAB_10019ad49;
          }
        }
        else {
          lVar4 = FUN_1001705fc(param_2);
        }
      }
    }
    lVar3 = FUN_1001736b8(DAT_1008c4d90,0,&cf_____Content_Disposition_form_data_name_______,*param_3
                          ,param_1,lVar4);
    local_38 = lVar3;
    FUN_10017060f(lVar4);
    if (lVar3 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006986a2(uVar5);
      }
      goto LAB_10019ad49;
    }
  }
  local_48 = &local_38;
  lVar4 = FUN_1001737f8(lVar3);
  if ((ulong)param_3[3] < (ulong)(lVar4 * 3)) {
    if (param_3[2] != 0) {
      FUN_1001c64c1();
    }
    lVar3 = lVar4 * 3 + 0xf0;
    lVar4 = FUN_1001c63e1(lVar3);
    param_3[2] = lVar4;
    if (lVar4 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_10069878e(uVar5);
      }
      FUN_1001782e9(0,0);
      goto LAB_10019ad76;
    }
    param_3[3] = lVar3;
  }
  lVar4 = local_38;
  uVar5 = FUN_1001737f8(local_38);
  FUN_1001739f3(lVar4,0,uVar5,0x8000100,0,0,*(undefined4 *)(param_3 + 2),
                *(undefined4 *)(param_3 + 3),&local_50);
  FUN_1001710c1(param_3[1],param_3[2],local_50);
  if (lVar2 == local_40) {
    uVar5 = param_3[1];
    uVar6 = FUN_100170f3b(param_2);
    uVar7 = FUN_100170ef7(param_2);
    FUN_1001710c1(uVar5,uVar6,uVar7);
    FUN_1001710c1(param_3[1],"\r\n",2);
  }
LAB_10019ad76:
  FUN_10017060f(local_38);
  return;
}

