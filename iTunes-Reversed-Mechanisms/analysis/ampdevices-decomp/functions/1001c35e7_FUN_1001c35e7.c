// name: FUN_1001c35e7
// address: 1001c35e7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001c35e7(char *param_1,uint param_2)

{
  double dVar1;
  char cVar2;
  size_t sVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  char local_448 [1040];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008a2238 != -1) {
    FUN_1006a6f3a();
  }
  cVar2 = DAT_1008a2241;
  if (DAT_1008a2240 == '\x01') {
    sVar3 = _strlen(param_1);
    sVar3 = sVar3 + 0x21;
    pcVar4 = local_448;
    if (sVar3 < 0x409) {
      sVar3 = 0x408;
      pcVar7 = (char *)0x0;
    }
    else {
      pcVar4 = operator_new__(sVar3);
      pcVar7 = pcVar4;
    }
    uVar5 = _CFTimeZoneCopyDefault();
    _CFAbsoluteTimeGetCurrent();
    uVar6 = _CFAbsoluteTimeGetGregorianDate(uVar5);
    FUN_10017060f(uVar5);
    *pcVar4 = '\0';
    dVar1 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    _snprintf(pcVar4,sVar3,"%04d-%02d-%02d %02d:%02d:%02d.%03d %s",uVar6 & 0xffffffff,
              (ulong)(uint)((int)(uVar6 >> 8) >> 0x18),(ulong)(uint)((int)(uVar6 >> 0x10) >> 0x18),
              (ulong)(uint)((int)(uVar6 >> 0x18) >> 0x18),(long)uVar6 >> 0x38,
              (ulong)(uint)(int)dVar1,
              (ulong)(uint)(int)((dVar1 - (double)(int)dVar1) * _DAT_100708b48),param_1);
    param_1 = local_448;
    if (pcVar7 != (char *)0x0) {
      param_1 = pcVar7;
    }
  }
  else {
    pcVar7 = (char *)0x0;
  }
  if (cVar2 == '\0') {
    _syslog_DARWIN_EXTSN(3,"%s",param_1);
  }
  else {
    iVar8 = (param_2 & 0xff) + 1;
    sVar3 = _strlen(param_1);
    _write(iVar8,param_1,sVar3);
    _write(iVar8,"\n",1);
  }
  if (pcVar7 != (char *)0x0) {
    operator_delete__(pcVar7);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

