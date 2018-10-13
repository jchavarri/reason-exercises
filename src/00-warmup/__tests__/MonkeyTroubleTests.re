open Jest;
open Expect;

describe("MonkeyTrouble", () => {
  test("to return true if both are glaring", () =>
    expect(MonkeyTrouble.(solution(Glare, Glare))) |> toBe(true)
  );
  test("to return true if both are smiling", () =>
    expect(MonkeyTrouble.(solution(Smile, Smile))) |> toBe(true)
  );
  test("to return false if one is smiling and the other is glaring", () =>
    expect(MonkeyTrouble.(solution(Glare, Smile))) |> toBe(false)
  );
});