// name: FUN_1004cc7e8
// address: 1004cc7e8

int FUN_1004cc7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 local_70;
  ulong local_68;
  ulong local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = _XML_ParserCreate(0);
  if (lVar3 == 0) {
    iVar2 = -0x6c;
  }
  else {
    piVar4 = (int *)FUN_1001c6429(0x2f78);
    if (piVar4 == (int *)0x0) {
      iVar2 = -0x6c;
    }
    else {
      *(undefined8 *)(piVar4 + 2) = param_2;
      *(undefined8 *)(piVar4 + 4) = param_3;
      _XML_SetUserData(lVar3,piVar4);
      _XML_SetElementHandler(lVar3,FUN_1004cc076,FUN_1004cc123);
      _XML_SetCharacterDataHandler(lVar3,FUN_1004cc4b6);
      iVar2 = FUN_10017cc65(param_1,0x64617461,1,&local_70);
      if (iVar2 == 0) {
        FUN_10017ce92(local_70,&local_60);
        if (local_60 == 0) {
          iVar2 = 0;
        }
        else {
          while( true ) {
            uVar6 = local_60;
            if (0xfff < local_60) {
              uVar6 = 0x1000;
            }
            local_68 = 0;
            iVar2 = FUN_10017d186(local_70,piVar4 + 6,uVar6,0,&local_68);
            local_60 = local_60 - local_68;
            if (iVar2 != 0) goto LAB_1004cc9f4;
            if (uVar6 != local_68) {
              uVar5 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar5,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "bytesToRead == bytesRead";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16)
                ;
              }
              FUN_1001782e9(0,0);
              uVar6 = local_68;
            }
            iVar2 = _XML_Parse(lVar3,piVar4 + 6,uVar6 & 0xffffffff);
            if (iVar2 == 0) break;
            iVar2 = *piVar4;
            if ((iVar2 != -0x80) && (iVar2 != 0)) goto LAB_1004cc9db;
            if ((iVar2 != 0) || (local_60 == 0)) goto LAB_1004cc9f4;
          }
          iVar2 = -0x32;
LAB_1004cc9db:
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
LAB_1004cc9f4:
        FUN_10017cdfb(local_70);
      }
      FUN_1001c64c1(piVar4);
    }
    _XML_ParserFree(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

