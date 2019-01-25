open BsReactNative;

/* here we define some styles */
module Styles = {
  open Style;

  let container =
    style([
      flex(1.),
      justifyContent(Center),
      alignItems(Stretch),
      backgroundColor(String("tomato")),
    ]);

  let text = style([
    color(String("#fff")),
    fontSize(Float(24.)),
    textAlign(Center),
    padding(Pt(20.))
  ]);

  let buttonContainer = style([
    color(String("#f00")),
    backgroundColor(String("blue")),
    flexDirection(Column)
  ]);

  let buttonRow = style([
    flexDirection(Row)
  ]);

  let buttonItem = style([
    backgroundColor(String("#550")),
    aspectRatio(1.),
    flex(1.),
    margin(Pt(1.))
  ]);
};

module Main = {
  let component = ReasonReact.statelessComponent("Main");

  let make = _children => {
    ...component,
    render: _self =>
      <View style=Styles.container>
        <Text style=Styles.text>
          (ReasonReact.string("Let's play with ReasonML!"))
        </Text>
        <View style = Styles.buttonContainer>
            <View style = Styles.buttonRow>
                <View style=Styles.buttonItem></View>
                <View style=Styles.buttonItem></View>
                <View style=Styles.buttonItem></View>
                <View style=Styles.buttonItem></View>
            </View>
            <View style = Styles.buttonRow>
                <View style=Styles.buttonItem></View>
                <View style=Styles.buttonItem></View>
                <View style=Styles.buttonItem></View>
                <View style=Styles.buttonItem></View>
            </View>
            <View style = Styles.buttonRow>
                <View style=Styles.buttonItem></View>
                <View style=Styles.buttonItem></View>
                <View style=Styles.buttonItem></View>
                <View style=Styles.buttonItem></View>
            </View>
            <View style = Styles.buttonRow>
                <View style=Styles.buttonItem></View>
                <View style=Styles.buttonItem></View>
                <View style=Styles.buttonItem></View>
                <View style=Styles.buttonItem></View>
            </View>
        </View>
      </View>,
  };
};

let app = () => <Main />;
