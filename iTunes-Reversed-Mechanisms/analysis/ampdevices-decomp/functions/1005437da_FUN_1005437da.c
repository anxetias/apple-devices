// name: FUN_1005437da
// address: 1005437da

bool FUN_1005437da(long param_1,char param_2,undefined1 *param_3)

{
  char cVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [8];
  undefined1 local_230 [32];
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [48];
  undefined1 local_1b0 [18];
  short local_19e;
  undefined2 local_19c;
  undefined1 local_98;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_1004f144f(*(undefined4 *)(param_1 + 0x28));
  FUN_1004f0e83(param_1,local_238);
  FUN_1001b8dfc(local_268,local_238);
  FUN_1004fda52(local_278,*(undefined4 *)(param_1 + 0x28));
  cVar1 = *(char *)(param_1 + 0x344);
  FUN_10044eef2(local_238);
  iVar4 = 0x10cf0064;
  if (cVar2 == '\0') {
    iVar4 = (uint)(cVar1 != '\0') * 2 + 0x10cf0063;
  }
  FUN_1001c334a(local_258,0x10cf0062);
  FUN_1001bbec4(local_248,local_258,local_268);
  FUN_1001b80b2(local_210,local_248);
  FUN_1001b7a50(local_248);
  FUN_1001b7a50(local_258);
  FUN_1001c334a(local_258,iVar4);
  FUN_1001bbec4(local_248,local_258,local_268);
  FUN_1001b80b2(local_200,local_248);
  FUN_1001b7a50(local_248);
  FUN_1001b7a50(local_258);
  FUN_1001c334a(local_248,0x10cf0039);
  FUN_1001b80b2(local_1f0,local_248);
  FUN_1001b7a50(local_248);
  FUN_1001c334a(local_248,0x5db30004);
  FUN_1001b80b2(local_1e0,local_248);
  FUN_1001b7a50(local_248);
  local_19e = (param_2 == '\0') + 1;
  local_19c = 2;
  FUN_1001b8172(local_230,local_278);
  if (param_3 != (undefined1 *)0x0) {
    FUN_1001c334a(local_248,0x5db30013);
    FUN_1001b80b2(local_1b0,local_248);
    FUN_1001b7a50(local_248);
  }
  sVar3 = FUN_10044f1a0(local_238);
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = local_98;
  }
  FUN_10020dfaa(local_238);
  FUN_1001b7a50(local_278);
  FUN_1001b7a50(local_268);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return sVar3 == 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

