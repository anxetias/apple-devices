// name: FUN_10039dcfe
// address: 10039dcfe

void FUN_10039dcfe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1008562a0;
  if ((long *)param_1[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010039dd19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 0x40))();
    return;
  }
  return;
}

