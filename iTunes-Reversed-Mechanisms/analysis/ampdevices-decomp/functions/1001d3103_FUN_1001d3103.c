// name: FUN_1001d3103
// address: 1001d3103

undefined8 FUN_1001d3103(undefined1 *param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_4 != (undefined8 *)0x0) {
    iVar3 = _strcmp((char *)*param_4,"integrity_check");
    if (iVar3 == 0) goto LAB_1001d3151;
  }
  uVar4 = FUN_1001cc310();
  cVar2 = _os_log_type_enabled(uVar4,0x10);
  if (cVar2 != '\0') {
    FUN_1006b2fcb(uVar4);
  }
  FUN_1001782e9(0,0);
LAB_1001d3151:
  if ((param_3 != (undefined8 *)0x0 && param_2 == 1) &&
     (((pcVar1 = (char *)*param_3, *pcVar1 != 'o' || (pcVar1[1] != 'k')) || (pcVar1[2] != '\0')))) {
    *param_1 = 1;
  }
  return 0;
}

