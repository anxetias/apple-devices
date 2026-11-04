// name: FUN_10042c246
// address: 10042c246

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10042c246(long param_1,int param_2,ushort param_3,short param_4)

{
  long lVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ushort uVar7;
  float fVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0x52564132) {
    lVar5 = FUN_1001c6429(0x1d);
    if (lVar5 == 0) {
LAB_10042c367:
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "tag != nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      uVar6 = 0xffffff94;
      goto LAB_10042c3d7;
    }
    *(undefined4 *)(lVar5 + 0xc) = 5;
    fVar8 = (float)(int)(short)param_3 / _DAT_10070bcc0 + DAT_100700b50;
    *(undefined2 *)(lVar5 + 0x12) = 0x100;
    if ((fVar8 != 0.0) || (NAN(fVar8))) {
      fVar8 = (float)_log10f();
      uVar3 = (ushort)(int)(fVar8 * DAT_100740ce0 * _DAT_10074950c);
    }
    else {
      uVar3 = 0;
    }
    *(ushort *)(lVar5 + 0x14) = uVar3 << 8 | uVar3 >> 8;
    *(undefined1 *)(lVar5 + 0x16) = 0;
    iVar4 = 5;
  }
  else {
    lVar5 = FUN_1001c6429(0x22);
    if (lVar5 == 0) goto LAB_10042c367;
    *(undefined4 *)(lVar5 + 0xc) = 10;
    uVar3 = -param_3;
    if ((short)-param_3 < 0) {
      uVar3 = param_3;
    }
    *(char *)(lVar5 + 0x12) = (-1 < (short)param_3) * '\x03';
    *(undefined1 *)(lVar5 + 0x13) = 0x10;
    if (0xfe < (short)uVar3) {
      uVar3 = 0xff;
    }
    lVar1 = (long)(param_4 * 0xffff) * 0x80010003;
    uVar3 = uVar3 << 8 | (ushort)(uVar3 << 8 | uVar3) >> 8;
    uVar7 = (short)(uint)((ulong)lVar1 >> 0x2e) - (short)(lVar1 >> 0x3f);
    *(ushort *)(lVar5 + 0x14) = uVar3;
    uVar7 = uVar7 * 0x100 | uVar7 >> 8;
    *(ushort *)(lVar5 + 0x16) = uVar3;
    *(ushort *)(lVar5 + 0x18) = uVar7;
    *(ushort *)(lVar5 + 0x1a) = uVar7;
    iVar4 = 10;
  }
  *(int *)(lVar5 + 8) = param_2;
  *(int *)(param_1 + 0xe) = *(int *)(param_1 + 0xe) + iVar4 + *(int *)(param_1 + 0x20);
  FUN_1001c2470(param_1 + 0x28,lVar5);
  uVar6 = 0;
LAB_10042c3d7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

