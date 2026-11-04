// name: FUN_100500c32
// address: 100500c32

int FUN_100500c32(int param_1,long param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = -4;
  if (param_1 < 0x69646c65) {
    if (param_1 != 0x41707052) {
      if ((param_1 == 0x636c7220) && (iVar2 = 0, param_3 != (void *)0x0)) {
        FUN_100331ed1();
        if (*(long *)((long)param_3 + 0x78) != 0) {
          FUN_1001eed65((long)param_3 + 0x78);
        }
        while (*(long *)((long)param_3 + 0x10) != 0) {
          FUN_1004e3b42();
        }
        while (*(long *)((long)param_3 + 0x80) != 0) {
          FUN_1004e3dbc(param_3,*(undefined8 *)(*(long *)((long)param_3 + 0x80) + 8));
        }
        FUN_100267a68(*(undefined8 *)((long)param_3 + 0x60));
        if (DAT_10088fa18 != 0) {
          FUN_1004649a8();
        }
        FUN_1001c72e9((long)param_3 + 0x18);
        FUN_10017060f(*(undefined8 *)((long)param_3 + 0x70));
        operator_delete(param_3);
        DAT_1008c77c0 = (undefined8 *)0x0;
      }
      goto LAB_100501088;
    }
    FUN_100331f55();
LAB_100500e77:
    iVar2 = 0;
  }
  else {
    if (param_1 == 0x69646c65) {
      iVar2 = 0;
      if (*(char *)((long)param_3 + 0x59) == '\0') {
        *(undefined1 *)((long)param_3 + 0x59) = 1;
        puVar4 = *(undefined8 **)((long)param_3 + 0x10);
        while (puVar8 = puVar4, puVar8 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)*puVar8;
          if ((*(char *)((long)puVar8 + 0x6abd) == '\0') && (puVar8[7] == 0)) {
            FUN_1004e3b42();
          }
        }
        *(undefined1 *)((long)param_3 + 0x59) = 0;
      }
      goto LAB_100501088;
    }
    if (param_1 == 0x70727174) {
      iVar2 = 0;
      if (param_3 != (void *)0x0) {
        for (puVar4 = *(undefined8 **)((long)param_3 + 0x10); puVar4 != (undefined8 *)0x0;
            puVar4 = (undefined8 *)*puVar4) {
          if (puVar4[6] != 0) {
            FUN_100315cf3();
            iVar3 = FUN_1004ef324(puVar4,1,1);
            if (iVar3 == 0) {
              FUN_1004e7a5c(puVar4);
              FUN_1003164cf(puVar4[6],0xf);
            }
          }
        }
      }
      goto LAB_100501088;
    }
    if (param_1 != 0x696e6974) goto LAB_100501088;
    FUN_1005b7982();
    puVar4 = (undefined8 *)FUN_1001c629e(0x88,&DAT_100711c6e);
    if (puVar4 == (undefined8 *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "pluginData != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x6c;
      goto LAB_100501088;
    }
    puVar4[5] = 0;
    puVar4[6] = 0;
    DAT_1008c77c0 = puVar4;
    *puVar4 = *(undefined8 *)(param_2 + 8);
    puVar4[1] = *(undefined8 *)(param_2 + 0x10);
    *(undefined1 *)(puVar4 + 0xb) = 1;
    *(undefined8 **)(param_2 + 0x1c) = puVar4;
    *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 6;
    iVar2 = FUN_1001c703f(puVar4 + 3,FUN_1005011a7,puVar4);
    if (iVar2 == -0x80) goto LAB_100501088;
    if (iVar2 == 0) {
      uVar5 = FUN_1001c156e();
      FUN_1001c6b4a(uVar5,puVar4 + 3);
      cVar1 = FUN_1001cd44e("StoreActivationMode",0,0);
      if (cVar1 == '\0') {
        lVar6 = FUN_100156d72();
        if (*(char *)(lVar6 + 0x78) == '\x01') {
          *(undefined1 *)(DAT_1008c76a0 + 0x1a92) = 1;
        }
        else {
          cVar1 = FUN_1001cd44e("StoreGeniusMode",0,0);
          if (cVar1 != '\0') {
            *(undefined1 *)(DAT_1008c76a0 + 0x1a93) = 1;
          }
        }
      }
      else {
        *(undefined1 *)(DAT_1008c76a0 + 0x1a91) = 1;
      }
      cVar1 = FUN_1001cd44e("DeviceBackupsDisabled",0,0);
      lVar6 = DAT_1008c76a0;
      if (cVar1 != '\0') {
        *(undefined1 *)(DAT_1008c76a0 + 0x1a94) = 1;
      }
      if (*(char *)(lVar6 + 0x1a91) == '\0') {
        if (*(char *)(lVar6 + 0x1a92) != '\0') {
          pcVar7 = "running in store demo mode";
          goto LAB_100500fa6;
        }
        if (*(char *)(lVar6 + 0x1a93) != '\0') {
          pcVar7 = "running in store genius mode";
          goto LAB_100500fa9;
        }
      }
      else {
        *(undefined1 *)(lVar6 + 0x1a92) = 0;
        pcVar7 = "running in store activation mode";
LAB_100500fa6:
        *(undefined1 *)(lVar6 + 0x1a93) = 0;
LAB_100500fa9:
        FUN_1001c38e0(pcVar7);
        lVar6 = DAT_1008c76a0;
      }
      if (*(char *)(lVar6 + 0x1a94) != '\0') {
        FUN_1001c38e0("device backups are disabled");
        lVar6 = DAT_1008c76a0;
      }
      if ((((*(char *)(lVar6 + 0x1a91) != '\0') || (*(char *)(lVar6 + 0x1a92) != '\0')) ||
          (*(char *)(lVar6 + 0x1a93) != '\0')) &&
         ((iVar2 = FUN_1001ee941(0,DAT_10074b9f0,0,0,FUN_1005014f3,puVar4,puVar4 + 0xf),
          iVar2 != -0x80 && (iVar2 != 0)))) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      iVar2 = FUN_100267603(FUN_100501841,puVar4,puVar4 + 0xc);
      if (iVar2 == -0x80) goto LAB_100501088;
      if (iVar2 == 0) {
        FUN_1005c6265();
        *(undefined1 *)(puVar4 + 0xb) = 0;
        goto LAB_100500e77;
      }
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 == '\0') goto LAB_100501088;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 == '\0') goto LAB_100501088;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
    }
    local_3c = 0x400;
    local_44 = "Assertion failure";
    local_48 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
  }
LAB_100501088:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

