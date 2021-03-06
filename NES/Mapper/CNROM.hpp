#pragma once

#include "Mapper.hpp"

class CNROM : public Mapper {
  private:
    u8 bankSelect = 0;

  public:
    CNROM(std::vector<u8> &prgCode, std::vector<u8> &chrROM) : Mapper(prgCode, chrROM) { }
    ~CNROM() override = default;
    u8* read(u16 address) override;
    void write(u16 address, u8 data) override;
    u8 ppuread(u16 address) override;
    void ppuwrite(u16 address, u8 data) override;
};