// name: FUN_100641a6c
// address: 100641a6c

undefined8 FUN_100641a6c(long param_1,int param_2,undefined1 *param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_118;
  char *local_114;
  undefined2 local_10c;
  char *local_10a;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  switch(param_2) {
  case 500:
    FUN_10056ddd3(&local_118,param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1);
    FUN_1001b80b2(*(long *)(param_1 + 0x8a8) + 0x30,&local_118);
    break;
  case 0x1f5:
    FUN_10056ddd3(&local_118,param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1);
    FUN_1001b80b2(*(long *)(param_1 + 0x8a8) + 0x40,&local_118);
    break;
  case 0x1f6:
    FUN_1001a833e(&local_118,param_3,param_4,0);
    FUN_1001a7b1c(*(long *)(param_1 + 0x8a8) + 0x50,&local_118);
    goto LAB_100641d69;
  case 0x1f7:
  case 0x1f9:
  case 0x1fa:
  case 0x1fb:
  case 0x1fd:
    goto switchD_100641aac_caseD_1f7;
  case 0x1f8:
    FUN_10056ddd3(&local_118,param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1);
    FUN_1001b80b2(*(long *)(param_1 + 0x8a8) + 0xe0,&local_118);
    break;
  case 0x1fc:
    FUN_1001a833e(&local_118,param_3,param_4,0);
    FUN_1001a7b1c(*(long *)(param_1 + 0x8a8) + 0xf0,&local_118);
    goto LAB_100641d69;
  case 0x1fe:
    FUN_10056ddd3(&local_118,param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1);
    FUN_1001b80b2(*(long *)(param_1 + 0x8a8) + 0x70,&local_118);
    break;
  case 0x1ff:
    if (param_4 != 0x2c) {
      uVar5 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar5,0x10);
      if (cVar4 != '\0') {
        local_118 = 0x8220202;
        local_114 = "Assertion failure";
        local_10c = 0x822;
        local_10a = "inObjectSize == sizeof( AMLMediaDomainInfo )";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_118,0x16);
      }
      FUN_1001782e9(0,0);
    }
    lVar6 = FUN_100308295(*(undefined8 *)(param_1 + 8),*param_3);
    *(long *)(param_1 + 0x640) = lVar6;
    if (lVar6 != 0) {
      uVar1 = *(undefined4 *)(param_3 + 0xc);
      uVar2 = *(undefined4 *)(param_3 + 0x10);
      uVar3 = *(undefined4 *)(param_3 + 0x14);
      *(undefined4 *)(lVar6 + 8) = *(undefined4 *)(param_3 + 8);
      *(undefined4 *)(lVar6 + 0xc) = uVar1;
      *(undefined4 *)(lVar6 + 0x10) = uVar2;
      *(undefined4 *)(lVar6 + 0x14) = uVar3;
    }
    goto switchD_100641aac_caseD_1f7;
  case 0x200:
    FUN_1001a833e(&local_118,param_3,param_4,0);
    FUN_1001a7b1c(*(long *)(param_1 + 0x8a8) + 0xd0,&local_118);
LAB_100641d69:
    FUN_1001a85d4(&local_118);
    goto switchD_100641aac_caseD_1f7;
  case 0x201:
    FUN_10056ddd3(&local_118,param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1);
    FUN_1001b80b2(*(long *)(param_1 + 0x8a8) + 0x98,&local_118);
    break;
  default:
    if ((param_2 == 0x616d6c70) && (param_4 != 0)) {
      _memcpy(&local_118,param_3,0xc2);
      if (param_4 != 0xc2) {
        uVar5 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar5,0x10);
        if (cVar4 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "inObjectSize == sizeof( AMLLibraryPrefsHeader )";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      lVar6 = *(long *)(param_1 + 0x8a8);
      if (lVar6 == 0) {
        lVar6 = param_1 + 0x8b0;
        *(long *)(param_1 + 0x8a8) = lVar6;
      }
      FUN_100383bd2(&local_10c,0,lVar6,0);
      lVar6 = *(long *)(param_1 + 0x8a8);
      if (*(long *)(lVar6 + 8) == 0) {
        *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(param_1 + 0x4c);
      }
      if (*(long *)(lVar6 + 0x10) == 0) {
        *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(param_1 + 0x88);
      }
      *(undefined8 *)(param_1 + 0x640) = 0;
    }
    goto switchD_100641aac_caseD_1f7;
  }
  FUN_1001b7a50(&local_118);
switchD_100641aac_caseD_1f7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

