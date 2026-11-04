// name: FUN_1005a2d90
// address: 1005a2d90

bool FUN_1005a2d90(long *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  bool bVar9;
  undefined4 local_678;
  char *local_674;
  undefined2 local_66c;
  int local_66a;
  undefined4 local_658 [2];
  long local_650;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    bVar9 = false;
    FUN_1001782e9(0,0);
    goto LAB_1005a321b;
  }
  *param_1 = param_2;
  if ((*(char *)(param_2 + 0x14cd8) == '\0') || ((char)param_1[1] != '\0')) {
LAB_1005a2dd7:
    if (*(char *)(param_2 + 0x38c) != '\0') {
      FUN_10017060f(param_1[0x2ba]);
      param_1[0x2ba] = 0;
      FUN_10017060f(param_1[699]);
      param_1[699] = 0;
      local_658[0] = *(undefined4 *)(param_2 + 0x284);
      local_650 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
      uVar6 = *(undefined8 *)(param_2 + 0x66d8);
      uVar3 = _CFArrayGetTypeID();
      lVar4 = FUN_10059ca0a(uVar6,&cf_Languages,uVar3);
      if (lVar4 == 0) {
        if ((*(char *)(param_2 + 0x38d) != '\0') &&
           (iVar2 = FUN_1002441f8(*(undefined4 *)(param_2 + 0x66b0),param_2 + 0x6b40,0x73706368,0,
                                  &local_458), iVar2 == 0)) {
          FUN_10017fdd8(&local_458,1,0xd,FUN_1005a3f17,local_658);
        }
      }
      else {
        FUN_1001647dc(lVar4,FUN_1005a3d7f,local_658);
      }
      param_1[0x2ba] = local_650;
      lVar4 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                            PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      lVar5 = FUN_10017076e(param_1[0x2ba]);
      if (0 < lVar5) {
        lVar8 = 0;
        do {
          uVar6 = FUN_100164a01(param_1[0x2ba],lVar8);
          if (((char)param_1[0x2b4] == '\0') || (*(char *)((long)param_1 + 0x15a5) == '\0')) {
LAB_1005a2ef7:
            pcVar7 = &cf_Nuance;
          }
          else {
            cVar1 = FUN_100170633(uVar6,&cf_en_US);
            pcVar7 = &cf_Alex;
            if (cVar1 == '\0') goto LAB_1005a2ef7;
          }
          FUN_100171502(lVar4,uVar6,pcVar7);
          lVar8 = lVar8 + 1;
        } while (lVar5 != lVar8);
      }
      param_1[699] = lVar4;
    }
    FUN_1005a3fe4(param_1);
    FUN_1005a4022(param_1);
    bVar9 = true;
    goto LAB_1005a321b;
  }
  iVar2 = FUN_1005a327c(param_1);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      param_1[0x2c6] = (ulong)(uint)~(-1 << (*(byte *)((long)param_1 + 0x161c) & 0x1f));
      param_1[0x2c7] = (ulong)(uint)~(-1 << (*(byte *)(param_1 + 0x2c4) & 0x1f));
      param_1[0x2c8] = (ulong)(uint)~(-1 << (*(byte *)((long)param_1 + 0x1624) & 0x1f));
      param_1[0x2c9] = (ulong)(uint)~(-1 << (*(byte *)(param_1 + 0x2c5) & 0x1f));
      param_1[0x2ca] = (ulong)(uint)~(-1 << (*(byte *)((long)param_1 + 0x162c) & 0x1f));
      iVar2 = 0xc;
      if (*(char *)(param_2 + 0x14dd5) != '\x02') {
        iVar2 = (uint)(*(char *)(param_2 + 0x14dd5) == '\x01') * 9 + -1;
      }
      *(int *)(param_1 + 0x2b7) = iVar2;
      iVar2 = FUN_10018e9e7(&local_458);
      if (iVar2 != -0x80) {
        if (iVar2 != 0) {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          goto joined_r0x0001005a310e;
        }
        FUN_1005a3d14(*(undefined8 *)(param_2 + 1000),local_658);
        iVar2 = FUN_10017ecc9(&local_458,local_658,param_1 + 0x122,0);
        if (iVar2 == 0) {
LAB_1005a308b:
          *(undefined1 *)(param_1 + 1) = 1;
          goto LAB_1005a2dd7;
        }
        iVar2 = FUN_100181256(&local_458,local_658,param_1 + 0x122);
        if (iVar2 == -0x80) goto LAB_1005a3215;
        if (iVar2 == 0) goto LAB_1005a308b;
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 == '\0') goto LAB_1005a3215;
        goto LAB_1005a31e7;
      }
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
joined_r0x0001005a310e:
      if (cVar1 != '\0') {
LAB_1005a31e7:
        local_66a = iVar2;
        iVar2 = local_66a;
        local_66c = 0x400;
        local_674 = "Assertion failure";
        local_678 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_678,0x12);
      }
    }
  }
LAB_1005a3215:
  bVar9 = iVar2 == 0;
LAB_1005a321b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

