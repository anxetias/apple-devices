// name: FUN_10042753a
// address: 10042753a

void FUN_10042753a(byte *param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 *param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 local_358 [512];
  uint local_158 [64];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  uVar7 = (ulong)param_3;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_6 = 0;
  if (DAT_1008be664 == '\0') {
    cVar1 = FUN_1001cdea6("id3-text-encoding",local_358);
    if (cVar1 == '\0') {
      uVar2 = FUN_1001ebd73();
      if ((int)uVar2 < 0x19) {
        switch(uVar2) {
        case 0:
          break;
        case 1:
          DAT_1008be668 = 0x420;
          break;
        case 2:
          DAT_1008be668 = 0xa06;
          break;
        case 3:
          DAT_1008be668 = 0x422;
          break;
        case 4:
switchD_100427630_caseD_4:
          DAT_1008be668 = 0x506;
          break;
        case 5:
          DAT_1008be668 = 0x505;
          break;
        case 6:
          DAT_1008be668 = 0x503;
          break;
        case 7:
switchD_100427630_caseD_7:
          DAT_1008be668 = 0x502;
          break;
        default:
          goto switchD_100427630_caseD_8;
        case 0x15:
          DAT_1008be668 = 0x41d;
        }
      }
      else {
        switch(uVar2) {
        case 0x19:
          DAT_1008be668 = 0x632;
          break;
        case 0x1d:
        case 0x24:
        case 0x26:
          DAT_1008be668 = 0x501;
          break;
        case 0x1e:
          DAT_1008be668 = 0x508;
          break;
        case 0x23:
          DAT_1008be668 = 0x504;
          break;
        default:
          if (uVar2 == 0x8c) goto switchD_100427630_caseD_4;
          if (uVar2 == 0x98) goto switchD_100427630_caseD_7;
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x25:
switchD_100427630_caseD_8:
          DAT_1008be668 = uVar2;
        }
      }
    }
    else {
      lVar4 = FUN_1001e5b1d(local_358);
      if (lVar4 != 0) {
        uVar2 = _CFStringConvertIANACharSetNameToEncoding(lVar4);
        DAT_1008be668 = 0;
        if (uVar2 != 0xffffffff) {
          DAT_1008be668 = uVar2;
        }
        FUN_10017060f(lVar4);
      }
      if (DAT_1008be668 == 0) {
        FUN_1001e7d39(local_358,local_158);
        DAT_1008be668 = local_158[0];
      }
    }
    DAT_1008be664 = '\x01';
  }
  if (DAT_1008be668 == 0) {
LAB_1004277eb:
    iVar3 = FUN_1001e70e7(param_2,uVar7,param_4,param_5,param_6);
    if ((param_1 == (byte *)0x0) || (iVar3 == 0)) goto LAB_1004278a0;
    puVar5 = local_158;
    if ((param_3 < 0x100) || (puVar5 = (uint *)FUN_1001c63e1(uVar7), puVar5 != (uint *)0x0)) {
      FUN_1001c631b(param_2,puVar5,uVar7);
      FUN_1001e7dee(puVar5,uVar7);
      FUN_1001e70e7(puVar5,uVar7,param_4,param_5,param_6);
      if (puVar5 != local_158) {
        FUN_1001c64c1(puVar5);
      }
      goto LAB_1004278a0;
    }
  }
  else {
    if (param_3 < 0x100) {
      puVar5 = local_158;
LAB_10042774e:
      FUN_1001c631b(param_2,puVar5,uVar7);
      *(undefined1 *)((long)puVar5 + uVar7) = 0;
      if ((param_1 != (byte *)0x0) && ((*param_1 & 1) == 0)) {
        FUN_1001e7dee(puVar5,uVar7);
      }
      lVar4 = FUN_100172473(DAT_1008c4d90,puVar5,DAT_1008be668);
      if (puVar5 != local_158) {
        FUN_1001c64c1(puVar5);
      }
      if (lVar4 != 0) {
        FUN_1001e5ca8(lVar4,param_4,param_5,param_6);
        FUN_10017060f(lVar4);
        goto LAB_1004278a0;
      }
      goto LAB_1004277eb;
    }
    puVar5 = (uint *)FUN_1001c63e1(param_3 + 1);
    if (puVar5 != (uint *)0x0) goto LAB_10042774e;
  }
  uVar6 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar6,0x10);
  if (cVar1 != '\0') {
    local_58 = 0x8220202;
    local_54 = "Assertion failure";
    local_4c = 0x822;
    local_4a = "textPtr != nullptr";
    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
  }
  FUN_1001782e9(0,0);
LAB_1004278a0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

