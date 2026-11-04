// name: FUN_100240d22
// address: 100240d22

/* WARNING: Removing unreachable block (ram,0x000100240e42) */
/* WARNING: Removing unreachable block (ram,0x000100240e48) */
/* WARNING: Removing unreachable block (ram,0x000100240e51) */
/* WARNING: Removing unreachable block (ram,0x000100240d87) */
/* WARNING: Removing unreachable block (ram,0x000100240d8d) */
/* WARNING: Removing unreachable block (ram,0x000100240d96) */
/* WARNING: Removing unreachable block (ram,0x000100240d9b) */
/* WARNING: Removing unreachable block (ram,0x000100240df4) */
/* WARNING: Removing unreachable block (ram,0x000100240dfa) */
/* WARNING: Removing unreachable block (ram,0x000100240e03) */
/* WARNING: Removing unreachable block (ram,0x000100240e08) */
/* WARNING: Removing unreachable block (ram,0x000100240e14) */
/* WARNING: Removing unreachable block (ram,0x000100240e19) */
/* WARNING: Removing unreachable block (ram,0x000100240dd1) */

char FUN_100240d22(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_10024117a(param_1,1,1);
  if ((((cVar1 == '\0') && (cVar1 = FUN_100240e5e(param_1,2,param_2), cVar1 == '\0')) &&
      (cVar1 = FUN_10024117a(param_1,1,3,param_2), cVar1 == '\0')) &&
     (cVar1 = FUN_100240e5e(param_1,4,param_2), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = 0;
    if (cVar1 == '\0') {
      uVar2 = 0x2347;
    }
    *param_3 = uVar2;
  }
  return cVar1;
}

