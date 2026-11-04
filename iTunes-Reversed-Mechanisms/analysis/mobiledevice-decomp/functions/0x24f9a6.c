// rea decompile_all
// name: SERestoreInfo::P73BaseDeliveryObject::matchID
// address: 0x24f9a6
// body: available
// range: 0x24f9a6-0x24f9ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::P73BaseDeliveryObject::matchID(std::vector<unsigned char, std::allocator<unsigned
   char> > const&) const */

undefined2 __thiscall
SERestoreInfo::P73BaseDeliveryObject::matchID(P73BaseDeliveryObject *this,vector *param_1)

{
  char *pcVar1;
  char *pcVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  pcVar1 = *(char **)param_1;
  if (*(long *)(param_1 + 8) - (long)pcVar1 == 0x20) {
    pcVar2 = *(char **)(this + 0x40);
    auVar5[0] = -(*pcVar1 == *pcVar2);
    auVar5[1] = -(pcVar1[1] == pcVar2[1]);
    auVar5[2] = -(pcVar1[2] == pcVar2[2]);
    auVar5[3] = -(pcVar1[3] == pcVar2[3]);
    auVar5[4] = -(pcVar1[4] == pcVar2[4]);
    auVar5[5] = -(pcVar1[5] == pcVar2[5]);
    auVar5[6] = -(pcVar1[6] == pcVar2[6]);
    auVar5[7] = -(pcVar1[7] == pcVar2[7]);
    auVar5[8] = -(pcVar1[8] == pcVar2[8]);
    auVar5[9] = -(pcVar1[9] == pcVar2[9]);
    auVar5[10] = -(pcVar1[10] == pcVar2[10]);
    auVar5[0xb] = -(pcVar1[0xb] == pcVar2[0xb]);
    auVar5[0xc] = -(pcVar1[0xc] == pcVar2[0xc]);
    auVar5[0xd] = -(pcVar1[0xd] == pcVar2[0xd]);
    auVar5[0xe] = -(pcVar1[0xe] == pcVar2[0xe]);
    auVar5[0xf] = -(pcVar1[0xf] == pcVar2[0xf]);
    auVar4[0] = -(pcVar1[0x10] == pcVar2[0x10]);
    auVar4[1] = -(pcVar1[0x11] == pcVar2[0x11]);
    auVar4[2] = -(pcVar1[0x12] == pcVar2[0x12]);
    auVar4[3] = -(pcVar1[0x13] == pcVar2[0x13]);
    auVar4[4] = -(pcVar1[0x14] == pcVar2[0x14]);
    auVar4[5] = -(pcVar1[0x15] == pcVar2[0x15]);
    auVar4[6] = -(pcVar1[0x16] == pcVar2[0x16]);
    auVar4[7] = -(pcVar1[0x17] == pcVar2[0x17]);
    auVar4[8] = -(pcVar1[0x18] == pcVar2[0x18]);
    auVar4[9] = -(pcVar1[0x19] == pcVar2[0x19]);
    auVar4[10] = -(pcVar1[0x1a] == pcVar2[0x1a]);
    auVar4[0xb] = -(pcVar1[0x1b] == pcVar2[0x1b]);
    auVar4[0xc] = -(pcVar1[0x1c] == pcVar2[0x1c]);
    auVar4[0xd] = -(pcVar1[0x1d] == pcVar2[0x1d]);
    auVar4[0xe] = -(pcVar1[0x1e] == pcVar2[0x1e]);
    auVar4[0xf] = -(pcVar1[0x1f] == pcVar2[0x1f]);
    auVar4 = auVar4 & auVar5;
    uVar3 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar4[0xf] >> 7) << 0xf;
    return CONCAT11((char)(uVar3 >> 8),uVar3 == 0xffff);
  }
  return 0;
}

