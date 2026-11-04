// name: FUN_1005881c4
// address: 1005881c4

void FUN_1005881c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  undefined1 local_d08 [8];
  undefined8 local_d00;
  undefined8 local_cf8;
  undefined8 local_cf0;
  undefined8 local_ce8;
  undefined8 local_ce0;
  undefined8 local_cd8;
  undefined8 local_cc8;
  undefined8 local_cb8;
  undefined8 local_ca8;
  undefined8 local_c98;
  undefined8 local_c88;
  undefined8 local_c78;
  undefined8 local_c68;
  undefined8 local_c58;
  undefined1 *local_c50;
  undefined1 *local_c48;
  char local_c38 [2048];
  char local_438 [1024];
  long local_38;
  
  if (in_AL != '\0') {
    local_cd8 = param_1;
    local_cc8 = param_2;
    local_cb8 = param_3;
    local_ca8 = param_4;
    local_c98 = param_5;
    local_c88 = param_6;
    local_c78 = param_7;
    local_c68 = param_8;
  }
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_438[0] = '\0';
  local_d00 = param_10;
  local_cf8 = param_11;
  local_cf0 = param_12;
  local_ce8 = param_13;
  local_ce0 = param_14;
  pcVar1 = _strstr(param_9,"%{public}");
  pcVar3 = param_9;
  if (pcVar1 != (char *)0x0) {
    do {
      _strncat(local_438,pcVar3,(long)pcVar1 - (long)pcVar3);
      sVar2 = _strlen(local_438);
      (local_438 + sVar2)[0] = '%';
      (local_438 + sVar2)[1] = '\0';
      pcVar3 = pcVar1 + 9;
      pcVar1 = _strstr(pcVar3,"%{public}");
    } while (pcVar1 != (char *)0x0);
    if (pcVar3 != param_9) {
      _strlcat(local_438,pcVar3,0x400);
      pcVar3 = local_438;
    }
  }
  local_c48 = local_d08;
  local_c50 = &stack0x00000008;
  local_c58 = 0x3000000008;
  _vsnprintf(local_c38,0x800,pcVar3,&local_c58);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

